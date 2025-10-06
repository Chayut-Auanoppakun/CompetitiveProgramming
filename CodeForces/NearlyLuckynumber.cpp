#include<bits/stdc++.h>
using namespace std;
bool isLuckyNumber(string& str) {
    for (char ch : str) {
        if (ch != '4' && ch != '7') {
            return false;
        }
    }
    return true;
}
int main(){
    string s; cin>>s;
    if(isLuckyNumber(s)&&s!="7"&& s!="4") cout<<"YES";
    else cout<<"NO";
}