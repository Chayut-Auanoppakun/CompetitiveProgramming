#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    T temp[b+1]; //create temp stack 
    for(int i=b;i>=0;--i) // iterate to store stack from top to b position down 
    {
        temp[i] = top();
        pop();
    }
    
    for(int i=0;i<=b;++i)
    {    
        push(temp[i]); 
        if(i<b-a+1)
            push(temp[i]);
    }
}

#endif