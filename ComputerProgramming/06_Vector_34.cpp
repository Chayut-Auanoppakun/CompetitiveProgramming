#include<iostream>
#include<vector>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
    float n,m,q,x,start_queue,start_call,start_serve,check;
    float cnt=0,zero=0;
    float sum=0;
    string cmd;
    cin>>n;
    vector<int> order;
    vector<int> serve;
    order.push_back(0);
    while(n--)
    {
        cin>>cmd;
        if(cmd=="reset")
        {
            cin>>m;
            start_queue = m;
            start_call = m;
            start_serve = m;
            check = m;
        }
        if(cmd=="new")
        {
            cin>>q;
            order.push_back(q);
            cout<<">> ticket "<<start_queue<<endl;
            start_queue++;
        }
        if(cmd=="next")
        {
            cout<<">> call "<<start_call<<endl;
            start_call++;
            check++;
        }
        if(cmd=="order")
        {
            while(start_serve<start_call)
            {
                serve.push_back(0);
                start_serve++;
                cnt++;
                zero++;
            }
            cin>>x;
            serve.push_back(x);
            cout<<">> qtime "<<start_serve-1<<" "<<serve[cnt]-order[cnt]<<endl;
            sum+=(serve[cnt]-order[cnt]);
            start_serve++;
            cnt++;
        }
        if(cmd=="avg_qtime")
            cout<<">> avg_qtime "<<round(sum/(cnt-zero)*100)/100<<endl;
    }
    return 0;
}
