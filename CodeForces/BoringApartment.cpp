#include<bits/stdc++.h>
using namespace std;
int numofdigit(int num){
    int cnt=0;
    while(num>0){
        num/=10;
        cnt++;
    }

    return cnt;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int num; cin>>num;
        if(numofdigit(num)==1){
            cout<<10*((num%10)-1)+1<<endl;
        }
        else if(numofdigit(num)==2){
            cout<<10*((num%10)-1)+3<<endl;
        }
        else if(numofdigit(num)==3 ){
            cout<<10*((num%10)-1)+6<<endl;
        }
        else if(numofdigit(num)==4){
            cout<<10*(num%10)<<endl;
        }
    }
    return 0;
}