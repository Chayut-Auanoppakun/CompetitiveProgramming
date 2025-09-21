#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int n;
    cin>>str;
    cin>>n; 
    for(int i=0;i<str.size();++i)
    {
        int cnt=0;
        while(str[i]==str[i+cnt])
        {
            cnt++;
        }
        
        if(cnt<n) cout<<str[i];
        else i+=cnt-1;
    }
}
