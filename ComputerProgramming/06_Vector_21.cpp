#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    vector<char> word;
    vector<string> bwt;
    cin>>str;
    str = str+"$";
    bwt.push_back(str);
    
    for(int i=0;i!=str.size();++i)
    {
        word.push_back(str[i]);
    }
    for(int k=0;k<word.size()-1;++k)
    {
        string s = "";
        int temp = word.front();
        for(int i=1;i<word.size();++i)
        {
            word[i-1] = word[i];
            s+=word[i-1]; 
        }
        word.back() = temp;
        s+=word.back(); 
        bwt.push_back(s);
    }
    
    sort(bwt.begin(),bwt.end());    
    for(int i=0;i<bwt.size();++i)
    {
        cout<<bwt[i].back();
    }
} 