#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    vector<int> money(100001,0);
    unordered_map<int,int> mpp;
    int n,m,start;
    cin>>n>>m>>start;
    while(n--)
    {
        int a,s;
        cin>>a>>s;
        mpp[a] = s; //map saving change
    }
    money[0] = start; //intial start saving money
    int t = start;
    for (int i=1;i<=100000;++i)
    {
        if(mpp[i]!=0)
        {
            t = mpp[i]; //change saving
        }
        money[i] = money[i-1]+t;
    }

    while(m--)
    {
        int p,x,total;
        cin>>p>>x;
        total = p+money[x];
        if(p<=money[x]) total = p;
        int ans = lower_bound(money.begin(),money.end(),total) - money.begin();
        cout<<ans<<" ";
    }
    return 0;
}
