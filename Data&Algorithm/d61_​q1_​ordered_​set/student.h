#include <vector>
#include <algorithm>
#include <set>
using namespace std;

template <typename T>
vector<T> Union(const vector<T> &A, const vector<T> &B)
{
    vector<T> v;
    set<T> s ; 
    for (int i=0;i<A.size();i++) 
    {
        v.push_back(A[i]); 
        s.insert(A[i]); 
    }
    for (int i=0;i<B.size();i++) 
    {
        if(s.find(B[i])==s.end())
            v.push_back(B[i]); 
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T> &A, const vector<T> &B)
{
    vector<T> v;
    set<T> s; 
    for(int i=0;i<B.size();i++)s.insert(B[i]); 
    for(int j=0;j<A.size();j++) 
    {
        if (s.find(A[j])!=s.end())
            v.push_back(A[j]); 
    }
    return v;
}

