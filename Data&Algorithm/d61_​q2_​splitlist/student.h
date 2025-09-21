void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    int mid = (size()+1)/2;
    auto start = begin();

    //list1
    for(int i=0;i<mid;++i) start++;
    list1.mHeader->prev->next = mHeader->next;
    mHeader->next->prev = list1.mHeader->prev;
    start.ptr->prev->next = list1.mHeader;
    list1.mHeader->prev = start.ptr->prev;

    //list2
    list2.mHeader->prev->next = start.ptr;
    start.ptr->prev = list2.mHeader->prev;
    mHeader->prev->next = list2.mHeader;
    list2.mHeader->prev = mHeader->prev;
    
    
    //clear list
    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    list1.mSize+=mid;
    list2.mSize+=(mSize-mid);
    mSize=0;
}

