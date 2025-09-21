#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, sum = 0;
    string country, next_country;
    cin >> n;
    string city[n];
    int cost[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> city[i] >> cost[i];   
    }   
    
    cin >> country;
    country = country.substr(4, 2);
    
    while(cin >> next_country)
    {
        next_country = next_country.substr(4, 2);  
        if(country != next_country)
        {
            for(int i = 0; i < n; ++i)
            {
                
                if(next_country == city[i]) 
                {
                    sum += cost[i];
                    break;
                }
            }
        }
        
        country = next_country;
    }
    
    cout << sum;
}
