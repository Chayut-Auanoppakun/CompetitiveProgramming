#ifndef __STUDENT_H_
#define __STUDENT_H_

#include<algorithm>
using namespace std;
template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  sort(data.begin(),data.end());
  int index=0;
  vector<T> vec = *this;
  clear();
  for(int i=0;i<vec.size();++i)
  {
    if(data[index].first==i) 
      push_back(data[index++].second);
    if(i<vec.size())
      push_back(vec[i]);
  }

}

#endif
