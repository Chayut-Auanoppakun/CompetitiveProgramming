#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    for(int j=1;j<=r;++j){
        for(int i=1;i<=c;++i){
            if(j%2!=0){
                cout<<"#";
            }

            else if(j%2==0){
                if(j%4==0&& i==1){
                    cout<<"#";
                }
                else if(j%4==2&& i==c) cout<<"#";
                else cout<<".";
            }
        }

        cout<<endl;
    }
}