#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    int n,x,cnt=0;
    cin>>n;
    while(cin>>x) s.insert(x);
    for(auto &i:s) if(s.find(n-i)!=s.end()&&n-i!=i) cnt++;
    cout<<cnt/2;
}