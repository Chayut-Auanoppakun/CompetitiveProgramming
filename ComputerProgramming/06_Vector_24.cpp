#include<iostream>
#include<vector>
#include<tuple>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    string product_id;
    double product_price;
    double cost;
    bool no_sales = true;
    vector<tuple<double,string,double>> product;
    
    while(1)
    {
        cin>>product_id;
        if(product_id=="END") break;
        cin>>product_price;
        product.push_back(make_tuple(0.0,product_id,product_price));
    }
    while(cin>>product_id)
    {
        for(auto & prod:product)
        if(product_id==get<1>(prod))
        {
            no_sales=false;
            get<0>(prod)-=get<2>(prod);
        }
    }
    int lenght = min(3,(int)product.size());
    if(no_sales==true) cout<<"No Sales";
        else if(no_sales==false)
        {
            sort(product.begin(),product.end());
            for(int i=0;i<lenght;++i)
            {
                if(get<0>(product[i])<0)
                    cout<<get<1>(product[i])<<" "<<-get<0>(product[i])<<endl;
            }
        }

}