#include<iostream>
#include<cmath>
#include<vector>
#include<tuple>
#include<algorithm>
using namespace std;

double find_dis(double x,double y)
{
    double origin_x = 0.0;
    double origin_y = 0.0;
    return sqrt(pow((x-origin_x),2) + pow((y-origin_y),2));
}

int main()
{
    int n;
    double x,y;
    cin>>n;
    vector<tuple<double,int,double,double>> data;
    for(int i=0;i<n;++i)
    {
        cin>>x>>y;
        data.push_back(make_tuple(find_dis(x,y),i+1,x,y));
    }
    sort(data.begin(),data.end());
    cout<<"#"<<get<1>(data[2])<<": ("<<get<2>(data[2])<<", "<<get<3>(data[2])<<")";
}
