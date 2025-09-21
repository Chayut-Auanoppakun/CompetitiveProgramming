#include<iostream>
#include<string>
using namespace std;
int main()
{
    string phone;
    cin>>phone;
    if(phone.size()==10)
    {
        if(phone[0]=='0')
            {
                if(phone[1]=='6')
                    cout<<"Mobile number";
                else if(phone[1]=='8')
                    cout<<"Mobile number";
                else if(phone[1]=='9')
                    cout<<"Mobile number";
                else
                    cout<<"Not a mobile number";
            }
        else cout<<"Not a mobile number";
    }
    if(phone.size()!=10)
        cout<<"Not a mobile number";

}

