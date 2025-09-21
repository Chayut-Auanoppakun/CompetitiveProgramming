#include<bits/stdc++.h>
using namespace std;
vector<int> moving(150000,INT_MAX);
int main()
{
    int k,n,m;
    cin>>k>>n>>m;
    map<int,int> mpp;
    int day,temp;
    for(int i=0;i<m;++i)
    {
        cin>>day>>temp;
        moving[day] = temp;
        if(day<=k) mpp[temp]++;
    }

    for(int i=1;i<=n;++i)
    {
        int next_day = i+k;
        int last_day = i-k-1;
        if(next_day<=n)
        {
            if(moving[next_day]!=INT_MAX) mpp[moving[next_day]]++;
        }
        if(last_day>=1)
        {
            if(moving[last_day]!= INT_MAX) 
            {
                mpp[moving[last_day]]--;
                if(mpp[moving[last_day]]==0)
                {
                    mpp.erase(moving[last_day]);
                }
            }

        }
        int max=0;
        int dup=0;
        if(mpp.size()==0) cout<<"X ";
        else
        {
            for(auto &m:mpp)
            {
                if(m.second>dup)
                {
                    dup = m.second;
                    max = m.first;
                }
            }
            cout<<max<<" ";
        }
    }
    return 0;
}