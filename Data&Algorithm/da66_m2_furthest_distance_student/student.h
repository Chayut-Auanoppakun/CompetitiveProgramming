#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "map_bst.h"

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT, MappedT, CompareT>::my_recur(node* n, int &aux){
	// You MAY use this function
	if(n==0) return -1;
    int leftnode = my_recur(n->left,aux)+1;
    int rightnode = my_recur(n->right,aux)+1;
    aux = std::max(aux,leftnode+rightnode);
    return std::max(leftnode,rightnode);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT, MappedT, CompareT>::furthest_distance() {
	// write your code here
    int x=-1;
	my_recur(mRoot,x);
    return x;
}

#endif
