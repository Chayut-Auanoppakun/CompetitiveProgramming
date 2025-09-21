#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> p(n+1);
    vector<int> result(n+1);

    for(int i=1;i<=n;++i){
        int g;
        cin>>g;
        result[g]=i;
    }

    for(int i=1;i<=n;++i){
        cout<<result[i]<<" ";
    }
}