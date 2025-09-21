#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int field,num_mon,t,range;
    cin>>field>>num_mon>>t>>range;
    vector<int> tower,mon_pos,mon_health;
    //monster data
    for(int i=0;i<num_mon;++i) 
    {
        int pos; cin>>pos;
        mon_pos.emplace_back(pos);
    }
    for(int i=0;i<num_mon;++i) 
    {
        int health; cin>>health;
        mon_health.emplace_back(health);
    }
    //tower
    for(int i=0;i<t;++i)
    {
        int pos; cin>>pos;
        tower.emplace_back(pos);
    }
    for(int k=0;k<t;++k)
    {
        for(int i=0;i<num_mon;++i)
        {
            if(tower[k]-range<=mon_pos[i] && mon_pos[i]<=tower[k]+range)
            {
                if(mon_health[i]>0) 
                {
                    mon_health[i]--;
                    break;
                }
            }
        }
    }
    int ans=0;
    for(int i=0;i<num_mon;++i) ans+=mon_health[i];
    cout<<ans;
    return 0;
}