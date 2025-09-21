#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <vector>
#include "queue.h"
template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos){
  bool dup[mSize]={0};
  for(auto &p:pos) dup[p]=1;
  for(auto &q:dup){
    if(!q) push(front());
    pop();
  }
}

#endif

