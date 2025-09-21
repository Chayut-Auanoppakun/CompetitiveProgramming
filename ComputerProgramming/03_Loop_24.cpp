#include <iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	for(int i=0;i<str.size();++i)
    {
        int cnt =1;
        while(i<str.size() && str[i]==str[i+1])
        {
            cnt++;
            i++;
        }
        cout<<str[i]<<" "<<cnt<<" ";
    }
	return 0;
}
