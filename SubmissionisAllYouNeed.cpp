#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int q; cin>>q;
        int sum=0;
        int mex=0;
        vector<int> vec(q);
        for(int i=0;i<q;++i){
            cin>>vec[i];
            sum+=vec[i];
            if(vec[i]==0) mex++;
        }
        cout<<mex+sum<<endl;
    }
}