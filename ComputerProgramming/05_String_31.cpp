#include <bits/stdc++.h>
using namespace std;

vector<pair<string, char>> pss = {{"UUUU", '0'}, {"UUUL", '1'}, {"UULU", '2'}, {"UULL", '3'}, {"ULUU", '4'}, {"ULUL", '5'},
                                  {"ULLU", '6'}, {"ULLL", '7'}, {"LUUU", '8'}, {"LUUL", '9'}, {"LULU", '-'}, {"LULL", ','}};

string decode(string s)
{
    string str = "";
    for (int i=2;i<s.size();++i)
    {
        if (s[i]>=65&&s[i]<=90)
            str += "U";
        else if (s[i]>=97&&s[i]<=122)
            str += "L";
    }
    return str;
}

int main()
{
    string line;
    getline(cin, line);
    string temp = line;
    string word;
    while (getline(cin,word))
    {
        if (word[0]=='D')
        {
            string res = "";
            string re=decode(word);
            for (int i=0;i<re.size();i += 4)
            {
                string check = re.substr(i,4);
                for (auto &i:pss)
                {
                    if (check == i.first)
                    {
                        res += i.second;
                        break;
                    }
                }
            }
            cout <<res<< endl;
        }
        else if(word[0] =='E')
        {
            string original = "";
            string ans = "";
            string encode = word.substr(2);

            for (char c:encode)
            {
                for (int i =0;i< pss.size();++i)
                {
                    if (c==pss[i].second)
                    {
                        original += pss[i].first;
                        break;
                    }
                }
            }

            while (line.size()<original.size()) line += line;
            line+=line;

            for (int i=0,j=0;i<line.size()&&j<original.size();++i)
            {
                if (isalpha(line[i]))
                {
                    ans += (original[j]=='U') ? toupper(line[i]) : tolower(line[i]);
                    j++;
                }
                else
                {
                    ans += line[i];
                }
            }

            cout << ans << endl;
            line = temp;
        }
    }
    return 0;
}
