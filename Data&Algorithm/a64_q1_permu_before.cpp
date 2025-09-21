#include <bits/stdc++.h>
using namespace std;
set<string> per;
void permutation(string str, string word, vector<pair<int, int>> arr){
    if(str=="")
    {
        per.insert(word);
        return;
    }
    for(int i=0;i<str.size();i++)
    {
        string p=str;
        string w=word+str[i];
        bool t=0;
        for(int k=0;k<arr.size();k++)
        if(w.find(arr[k].first)>w.find(arr[k].second)) t=1;
        if(t) continue;
        permutation(p.erase(i,1),w,arr);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>> arr;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin >> a >> b;
        arr.push_back(make_pair(a,b));
    }
    string a="";
    char k=0;
    for(int i=0;i<n;i++) a+=k++;
    permutation(a,"",arr);
    for(auto i:per)
    {
        for(auto j:i)
        {
            cout << 0+j << ' ';
        }
        cout << endl;
    }
}