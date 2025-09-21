#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
  //write your code here
  if(!n) return 0;
  return process(n->left)+process(n->right)+1;
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
  //write your code here
  if (mRoot->left != NULL)
  {
    left.mRoot = mRoot->left;
    mRoot->left->parent = NULL;
    
    left.mSize = left.process(left.mRoot);;
    mSize -= left.process(left.mRoot);;
    mRoot->left = NULL;
  } 
  if (mRoot->right != NULL)
  {
    right.mRoot = mRoot->right;
    mRoot->right->parent = NULL;
    
    right.process(right.mRoot);
    right.mSize = right.process(right.mRoot);
    mSize -= right.process(right.mRoot);
    mRoot->right = NULL;
  }
  return mRoot->data;
}

#endif

