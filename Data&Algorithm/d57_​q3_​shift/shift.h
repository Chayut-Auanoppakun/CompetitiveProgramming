void shift(int k) {
	// TODO: Add your code here
	auto current = mHeader->next;
	int pos;
	if(k<0) pos = (mSize-(k*(-1))%mSize)%mSize;
	else pos = k%mSize;

	for(int i=0;i<pos;++i) //iterate through list
	{
		current = current->next;
	}
	mHeader->prev->next = mHeader->next;
	mHeader->next->prev = mHeader->prev;
	current->prev->next = mHeader;
	mHeader->prev = current->prev;
	current->prev = mHeader;
	mHeader->next = current;
}

