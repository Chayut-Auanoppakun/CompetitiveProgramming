#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double max = -1 , min = 1e8;
    double score[5],sum=0;
    for(int i=0;i<4;++i)
    {
        cin>>score[i];
        sum+=score[i];
         if(score[i]>max)
            max = score[i];
        if(score[i]<min)
            min = score[i];
    }
    sum = sum-max-min;
    sum/=2;
    cout<<round(sum*100.0)/100.0;
}
