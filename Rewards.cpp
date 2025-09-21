#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,x,y,z,n;
    int totalmedal=0,totalcup=0;
    cin>>a>>b>>c;
    totalmedal +=(a+b+c); 
    cin>>x>>y>>z;
    cin>>n;
    totalcup +=(x+y+z);
    int shelvesForCups = (totalcup + 9) / 10;     
    int shelvesForMedals = (totalmedal + 4) / 5;
    int total = shelvesForCups+shelvesForMedals;
    if (total <= n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}