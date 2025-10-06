#include<bits/stdc++.h>
using namespace std;

bool distinct(int year){
    string str = to_string(year);
    set<char> digits;
    for (char digit : str) {
        if (digits.count(digit)) {
            return false;
        }
        digits.insert(digit);
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int next = n+1;
    while (!distinct(next)) {
        next++;
    }
    cout<<next;

    return 0;
}