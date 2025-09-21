#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<string,int>> card = {{"2",2},{"3",3},{"4",4},{"5",5},{"6",6},{"7",7},{"8",8},{"9",9},{"10",10},{"J",10},{"Q",10},{"K",10}};

    int n,m;
    int counta=0,countb=0;
    cin>>n>>m;
    vector<string> a,b;
    string x,y;
    int sum_a=0,sum_b=0;
    for(int i=0;i<n;++i)
    {
        cin>>x;
        if(x=="A") counta++;
        a.push_back(x);
    }
    for(int j=0;j<m;++j)
    {
        cin>>y;
        if(y=="A") countb++;
        b.push_back(y);
    }
    for(auto &i:a)
    {
        for(auto &c:card)
        {
            if(i==c.first)
                sum_a+=c.second;
        }
    }
    for(int k=0; k<a.size();++k)
    {
        if(sum_a==10 && counta==2)
        {
            sum_a+=2;
            break;
        }
        else if(a[k]=="A")
        {
            if(sum_a+11<=21)
            {
                sum_a+=11;
            }
            else sum_a++;
        }
    }
    for(auto &j:b)
    {
        for(auto &c:card)
        {
            if(j==c.first)
                sum_b+=c.second;
        }
    }
    for(int k=0; k<b.size();++k)
    {
        if(sum_b==10 && countb==2)
        {
            sum_b+=2;
            break;
        }
        else if(b[k]=="A")
        {
            if(sum_b+11<=21)
            {
                sum_b+=11;
            }
            else sum_b++;
        }
    }
    if(sum_a==sum_b)  cout<<"Draw"<<endl;
    else if(sum_a>21 && sum_b>21) cout<<"Draw"<<endl;
    else if(sum_a<=21 && sum_b>21) cout<<"A"<<endl;
    else if(sum_b<=21 && sum_a>21) cout<<"B"<<endl;
    else if(sum_a>sum_b &&sum_a<=21) cout<<"A"<<endl;
    else if(sum_b>sum_a &&sum_b<=21) cout<<"B"<<endl;
    cout<<sum_a<<" "<<sum_b;
    return 0;
}