#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int tim=0;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    if(arr[0]>15){
        cout<<"15";
        return 0;
    }
    else{
        tim=arr[0];
        for(int i=1;i<n;++i){
            
            if(arr[i]-arr[i-1]<=15){
                tim=arr[i];
            }
            else break;
            //cout<<"=>"<<arr[i]-arr[i-1]<<" "<<tim<<endl;
        }
    }
    if(tim+15<=90) cout<<tim+15;
    else if(tim+15>90) cout<<"90";
}