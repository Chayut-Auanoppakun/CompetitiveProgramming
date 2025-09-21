#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    bool line[1000000]={0};
    int n,in,start,stop,ans=0;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>in;
        if(in==1)
        {
            cin>>start>>stop;
            while(start<=stop)
            {
                if(line[start-1]==0 && line[start]==0 && line[start+1]==0) 
                    ans++;
                if(line[start-1]==1 && line[start]==0 && line[start+1]==1)
                    ans--;
                line[start]=1;
                start++;
            }
        }
        if(in==2) cout<<ans<<endl;
    }
    return 0;
}