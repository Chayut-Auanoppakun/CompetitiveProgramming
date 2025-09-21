#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "map_bst.h"

template <typename KeyT, typename MappedT, typename CompareT>
long long CP::map_bst<KeyT, MappedT, CompareT>::my_recur(node* n, size_t aux) {
  // you may use this function
  int depth=0;
  if(n==NULL) return 0;
  if(n->left!=NULL) depth+=my_recur(n->left,aux+1);
  if(n->right!=NULL) depth+=my_recur(n->right,aux+1);
  if(n->left==NULL && n->right==NULL) return aux;
  return depth;
}

template <typename KeyT, typename MappedT, typename CompareT>
long long CP::map_bst<KeyT, MappedT, CompareT>::sum_leaves_depth() {
  return my_recur(mRoot,0);
}

#endif
