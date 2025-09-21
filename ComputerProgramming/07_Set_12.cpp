#include<iostream>
#include<set>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec;
    unordered_set<int> number,result;
    int n;
    while(cin>>n)
    {
        //cin>>n;
        vec.push_back(n);
    }
    for(int i=0;i<vec.size();++i)
    {
        if(number.find(vec[i])==number.end())
            number.insert(vec[i]);
        else
        {
            result.insert(i+1);
            break;
        }
    }
    if(result.size()==0) cout<<"-1";
    else
    {
        for(auto it = result.begin();it!=result.end();++it)
        {
            cout<<*it<<" ";
        }
    }
}