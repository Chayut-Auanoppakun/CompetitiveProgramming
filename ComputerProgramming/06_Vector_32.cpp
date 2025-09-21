#include<bits/stdc++.h>
using namespace std;
int maxfit = 100;

int sumvector(vector<int> & s)
{
    int sum=0;
    for(auto x:s) sum+=x; 
    return sum;
}

vector<vector<int>> first_fit(vector<int> & data)
{
    vector<vector<int>> fit;
    for(auto i:data)
    {
        bool finish_sum = false;
        for(auto & j:fit)
        {
            if(sumvector(j)+i<=maxfit)
            {
                j.push_back(i);
                finish_sum = true;
                break;
            }
        }
        if(!finish_sum) fit.push_back(vector<int>(1,i));
    }
    return fit;
}

vector<vector<int>> best_fit(vector<int> & data)
{
    vector<vector<int>> fit;
    for(auto i:data)
    {
        int min = 100;
        int lowest = -1;
        for(int k=0;k<fit.size();++k)
        {
            int left = maxfit-sumvector(fit[k])-i;
            if(left>=0 && left<min)
            {
                min = left;
                lowest = k;
            }
        }

        if(lowest==-1) fit.push_back(vector<int>(1,i));
        else fit[lowest].push_back(i);
    }
    return fit;
}

void printt(vector<vector<int>> fit)
{
    vector<tuple<int,int,vector<int>>> result;
    for(auto & d:fit)
    {
        sort(d.begin(),d.end());
        result.push_back(make_tuple(maxfit-sumvector(d),d.size(),d));
    } 
    sort(result.begin(),result.end());
    for(auto & r:result)
    {
        for(auto ans:get<2>(r))
        {
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    string sol;
    cin>>sol;
    int x;
    vector<int> data;
    while(cin>>x) data.push_back(x);
    if(sol=="first")
        printt(first_fit(data));
    else if(sol=="best")
        printt(best_fit(data));
    return 0;
}