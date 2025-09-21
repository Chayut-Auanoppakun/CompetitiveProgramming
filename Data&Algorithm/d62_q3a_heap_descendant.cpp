#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    size_t n,a;
    cin>>n>>a;
    queue<int> nodes;
    vector<int> show_result;
    nodes.push(a);
    while(!nodes.empty())
    {
        size_t current = nodes.front();
        show_result.emplace_back(current);
        nodes.pop();

        size_t leftchild = current*2+1,rightchild = current*2+2;
        if(leftchild<n) nodes.push(leftchild);
        if(rightchild<n) nodes.push(rightchild);
    }
    cout<<show_result.size()<<endl;
    for(auto &s:show_result) cout<<s<<" "; 
}