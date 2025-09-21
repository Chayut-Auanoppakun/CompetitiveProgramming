void replace(const T& x, list<T>& y) {
  //write your code here
  for(auto itr = begin();itr!=end();++itr)
  {
    if(*itr==x)
    {
      for(auto &a:y) 
        insert(itr,a);
      erase(itr);
    }
  }
}
