#include<iostream>
#include<string>
using namespace std;
int main()
{
    string ans,reply;
    int pts=0;
    bool check = false;
    getline(cin,ans);
    getline(cin,reply);
    if(ans.size()!=reply.size())
        check = false;
    else
    {
        check = true;
        for(int i=0;i<ans.size();++i)
        {
            if(ans[i]==reply[i])
                pts++;
        }
    }
    if(check==true) cout<<pts;
    else if(check==false) cout<<"Incomplete answer";

}
