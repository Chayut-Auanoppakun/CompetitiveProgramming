#ifndef __STUDENT_H_
#define __STUDENT_H_
template <typename KeyT,typename MappedT,typename CompareT>
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val){
  CP::map_bst<KeyT, MappedT, CompareT> result;
  node *n=mRoot,*temp,*current;
  while(n!=NULL){
    if(mLess(n->data.first,val)){
      n=n->right;
    }
    else{
      temp=n->left;
      child_link(n->parent,n->data.first)=temp;
      if(temp!=NULL){
        n->left=NULL;
        temp->parent=n->parent;
      }
      if(result.mRoot==NULL){
        result.mRoot=n;
        result.mRoot->parent=NULL;
      }
      else{
        current->left=n;
        n->parent=current;
      }
      current=n;
      n=temp;
    }
  }
  return result;
}
#endif
