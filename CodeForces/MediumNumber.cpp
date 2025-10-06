#include<bits/stdc++.h>
using namespace std;
int main(){
    int q; cin>>q;
    for(int i=0;i<q;++i){
        int a,b,c;
        vector<int> v(3);
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(),v.end());
        cout<<v[1]<<endl;
    }
    return 0;
}