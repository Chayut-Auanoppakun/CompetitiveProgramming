#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string id,k;
    vector<string> keep;
    map<string,set<string>> mpp;
    while(n--)
    {
        cin>>id;
        keep.push_back(id);
        while(1)
        {
            cin>>k;
            if(k=="*") break;
            mpp[id].insert(k);
        }
    }
    string target;
    cin>>target;
    bool found = false;
    for(auto i:keep)
    {
        if(i==target) continue;
        for(auto j:mpp[i])
        {
            if(mpp[target].find(j)!=mpp[target].end())
            {
                cout<<">> "<< i <<endl;
                found = true;
                break;
            }
        }
    }
    if(found==false) cout<< ">> " <<"Not Found";
    return 0;
}