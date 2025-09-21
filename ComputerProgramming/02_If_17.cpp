#include<iostream>
using namespace std;
int main()
{
    int w;
    cin>>w;
    if(w>2000)
        cout<<"Reject";
    if(w<=100)
        cout<<"18";
    if(w>100 && w<=250)
        cout<<"22";
    if(w>250 && w<=500)
        cout<<"28";
    if(w>500 && w<=1000)
        cout<<"38";
    if(w>1000 && w<=2000)
        cout<<"58";
}
