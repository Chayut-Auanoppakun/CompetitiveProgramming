#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num[10] = {0,0,0,0,0,0,0,0,0,0};
    vector<int> ans;
    bool res = true;
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();++i)
    {
        if(str[i]=='0') num[0]+=1;
        if(str[i]=='1') num[1]+=1;
        if(str[i]=='2') num[2]+=1;
        if(str[i]=='3') num[3]+=1;
        if(str[i]=='4') num[4]+=1;
        if(str[i]=='5') num[5]+=1;
        if(str[i]=='6') num[6]+=1;
        if(str[i]=='7') num[7]+=1;
        if(str[i]=='8') num[8]+=1;
        if(str[i]=='9') num[9]+=1;
    }
    for(int i=0;i<10;++i)
    {
        if(num[i]==0)
            ans.push_back(i);
    }
    if(ans.size()==0) cout<<"None";
    else
    {
        for(int i=0;i<ans.size()-1;++i)
    {
        cout<<ans[i]<<",";
    }
    cout<<ans.back();
    }
}
