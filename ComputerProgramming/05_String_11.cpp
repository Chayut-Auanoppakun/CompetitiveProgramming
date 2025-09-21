#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        char c = str[str.size()-1];
        int cnt=0;
        for(char it:str)
        {
            cnt+=it ==c;
            if(cnt%2!=0 && it!=c) cout<<it;
        }

    }
    cout<<endl;
}
