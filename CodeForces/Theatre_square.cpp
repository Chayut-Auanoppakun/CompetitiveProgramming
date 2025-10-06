#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a;
    cin>>n>>m>>a;
    long long w,l;
    l = (n+a-1)/a;
    w = (m+a-1)/a;
    cout<<l*w;
    return 0;
}