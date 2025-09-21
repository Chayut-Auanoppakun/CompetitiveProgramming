#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    string str;
    map<string,vector<string>> artist;
    vector<string> song;
    for (int i = 0;i<n;++i)
    {
        getline(cin, str);
        int pos = str.find(",");
        string song_name = str.substr(0,pos);
        string artist_name = str.substr(pos+2,string::npos);
        artist[song_name].push_back(artist_name); 
    }
    string name;
    getline(cin,name);
    int x = name.find(",");
    song.push_back(name.substr(0,x));
    name = name.substr(x + 2,string::npos);

    while (name.find(",")!=string::npos)
    {
        int p = name.find(",");
        song.push_back(name.substr(0, p));
        name = name.substr(p + 2, string::npos);
    }
    song.push_back(name);

    for(auto & s:song) 
    {
        cout<<s<<" -> ";
        if(artist.find(s)!=artist.end())
        {
            for(int i=0;i<artist[s].size();++i)
            {
                cout<<artist[s][i];
                if(i!=artist[s].size()-1) 
                    cout<<", ";
            }
        }
        else cout<<"Not found";
        cout<<endl;
    }
    return 0;
}
