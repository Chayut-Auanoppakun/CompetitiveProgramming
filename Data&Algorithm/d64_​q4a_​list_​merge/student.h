#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls)
{
  auto itr = ls.begin();
  for(;itr!=ls.end();itr++)
  {
    CP::list<T> &tmp = *itr;
    tmp.mHeader->next->prev = mHeader->prev;
    mHeader->prev->next = tmp.mHeader->next;
    tmp.mHeader->prev->next = mHeader;
    mHeader->prev = tmp.mHeader->prev;

    tmp.mHeader->next = tmp.mHeader;
    tmp.mHeader->prev = tmp.mHeader;
    
    mSize += tmp.mSize;
    tmp.mSize = 0;
  }
}

#endif

