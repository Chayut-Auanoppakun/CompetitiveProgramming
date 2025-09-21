#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    cin>>n;
    bool flag = true;
    bool t =true;
    int x=0;
    vector<int> vec;
    map<int,int> mpp;
    for(int i=0;i<n;++i)
    {
        cin>>m;
        if(m>n||m<1)
        { 
            t = false;
            x = 1;
            if(!t) cout<<"NO";
            break;
        }
        mpp[m]++;
        if(mpp[m]>=2)
        {
            flag = false;
            break;
        }
    }
    if(flag==true && x==0) cout<<"YES";
    else if(flag ==false && x==0)cout<<"NO";

    return 0;
}