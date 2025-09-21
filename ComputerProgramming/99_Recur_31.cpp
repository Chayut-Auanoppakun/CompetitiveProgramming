#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string str;
    vector<string> ans;
    cin>>str;
    sort(str.begin(),str.end());
    do
    {
        ans.push_back(str);
    }while(next_permutation(str.begin(),str.end()));
    sort(ans.begin(),ans.end());
    for(const auto it:ans) cout<<it<<" ";
}
