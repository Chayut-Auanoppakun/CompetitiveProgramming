#include<bits/stdc++.h>
#define pss pair<string,string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string grade,id;
    vector<pss> student;
    string list_grade[8] = {"A","B+","B","C+","C","D+","D","F"};
    for(int i=0;i<n;++i)
    {
        cin>>id>>grade;
        student.push_back(make_pair(id,grade));
    }
    string f,l;
    cin.ignore();
    string upgrade;
    while(cin>>upgrade)
    {
        l = upgrade.substr(upgrade.size()-1,1);
        f = upgrade.substr(0,upgrade.size()-1);
        for(auto &it:student)
        {
            if(it.first==f)
            {
                int index = find(begin(list_grade),end(list_grade),it.second) - begin(list_grade);
                if(l=="+" && index>0)
                {
                    if(it.second ==list_grade[0]) it.second = list_grade[0];
                    it.second = list_grade[index-1];
                }
                else if(l=="-" && index<7) it.second = list_grade[index+1];
            }
        }
    }

    unordered_map<string,int> grade_index;
    for(int i=0;i<8;++i)
    {
        grade_index[list_grade[i]] =i;
    }
    auto compare = [&grade_index](pss &a,pss &b)
    {
        return grade_index[a.second] < grade_index[b.second];
    };
    sort(student.begin(),student.end(),compare);
    for(auto x:student)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}
