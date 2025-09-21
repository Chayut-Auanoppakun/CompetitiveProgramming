#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<double,double> &a, pair<double,double> &b) {
    return (a.first/a.second) > (b.first/b.second);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    double w,ans=0;
    scanf("%ld%d",&w,&n);
    pair<double,double> pdd[n];
    for(int i=0;i<n;++i) scanf("%lf", &pdd[i].first);
    for(int j=0;j<n;++j) scanf("%lf", &pdd[j].second);
    sort(pdd,pdd+n,cmp);
    for(int i=0;i<n;++i){
        if(w<=pdd[i].second){ 
            ans+=(pdd[i].first*(w/pdd[i].second));
            break;
        }
        else
        {
            ans+=pdd[i].first;
            w-=pdd[i].second;
        }
    }
    printf("%.4lf",ans);
}