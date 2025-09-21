#include<iostream>
#include<set>
#include<string>
using namespace std;
int main()
{
    set<string> win,lose,ans;
    string w,l;
    while(cin>>w>>l)
    {

        win.insert(w);
        lose.insert(l);
    }
    for(auto it1:win)
    {
        for(auto it2:lose)
        {
            auto finding = lose.find(it1);
            if(*finding==it1)
                continue;
            else
                ans.insert(it1);
        }
    }
    if(ans.size()==0) cout<<"None";
    else
    {
        for(auto iter:ans)
        {
            cout<<iter<<" ";
        }
    }
}
