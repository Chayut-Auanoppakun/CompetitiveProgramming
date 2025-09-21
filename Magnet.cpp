#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string prev,current;
    int groups = 1;
    cin>>prev;
    for(int i=1;i<n;++i){
        cin>>current;
        if (current!=prev){
            groups++;
        }
        prev = current;
    }
    cout << groups << endl;
    return 0;
}
