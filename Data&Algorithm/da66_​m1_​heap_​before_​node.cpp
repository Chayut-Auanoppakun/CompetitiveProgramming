#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,m; cin>>n>>m;
    deque<int> q;
    vector<int> keep;
    q.push_front(0);
    while(!q.empty())
    {
        int tmp = q.front();
        q.pop_front();
        if(tmp!=m)
        {
            keep.emplace_back(tmp);
            int leftchild = tmp*2+1 , rightchild = tmp*2+2;
            if(leftchild<n) q.push_front(leftchild);
            if(rightchild<n) q.push_front(rightchild);
        }
    }cout<<keep.size()<<"\n";
    for(int i=0;i!=keep.size();++i) cout<<keep[i]<<" ";
}
