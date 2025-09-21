#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  for(int k=pos.size()-1;k>=0;k--)
  {
      this->erase((this->begin())+pos[k]);
  }
}

#endif
