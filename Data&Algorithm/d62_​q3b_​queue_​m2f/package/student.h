#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    size_t moving = (mFront+pos)%mCap;
    T m = mData[moving];
    while(pos--){
        mData[moving]=mData[(moving-1+mCap)%mCap];
        moving = (moving-1+mCap)%mCap;
    }
    mData[mFront] = m;
    
}

#endif
