#include<bits/stdc++.h>
using namespace std;

string dec2bin(int d) 
{
 if (d < 2) return (d == 0 ? "0" : "1");
 return dec2bin(d/2) + dec2bin(d%2);
}

int main()
{
    int n,m;
    cin>>n>>m;
    int maxnum;
    set<string> binary;
    string str,add="";
    for(int i=0;i<n;++i) 
    {
        maxnum += pow(2,i); 
    }
    for(int k=0;k<=maxnum;++k)
    {
        str = dec2bin(k);
        if(str.size()<n)
        {
            for(int i=0;i<n-str.size();++i) add+="0";
            str = add+str;
        }
        int cnt=0;
        for(int j=0;j<str.size();++j)
        {
            while(str[j]==str[j+cnt]&&str[j]=='1'&&str[j+cnt]=='1')
            {
                    cnt++;
            }
            if(cnt==m) binary.insert(str);
            cnt=0;
        }
        str.clear();
        add.clear();
    }
    for(auto &s:binary) cout<<s<<endl;
    return 0;
}