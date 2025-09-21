#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    string name,character;
    vector<string> type;
    map<string , vector<string>> cartoon;
    while(cin>>name>>character)
    {
        if(cartoon.find(character)==cartoon.end())
        {
            type.push_back(character);
            cartoon[character] = vector<string>();
        }
        cartoon[character].push_back(name);
    }
    for(auto it:type)
    {
        cout<<it<<":";
        for(auto i:cartoon[it])
        {
            cout<<" "<<i;
        }
        cout<<endl;
    }
}