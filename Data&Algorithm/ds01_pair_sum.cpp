#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    set<int> data;
    while(n--)
    {
        int a;
        cin>>a;
        data.insert(a);
    }
    while(m--)
    {
        int q;
        cin>>q;
        bool flag = false;
        for(auto &da:data)
        {
            if(data.find(q-da)!=data.end()&&q-da!=da)
            {
                flag = true;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}