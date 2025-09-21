// Your code here
int mid=0;
KeyT ans;
int dfs(node *n)
{
    if(n==NULL) return 0;
    int l,r,d;
    l = dfs(n->left);
    r = dfs(n->right);
    d = std::abs(l-r);
    if(d>mid || (d==mid && ans>n->data.first))
    {
        mid = d;
        ans = n->data.first;
    }
    return 1 + std::max(l,r);
}

KeyT getValueOfMostImbalanceNode() {
    // Your code here
    dfs(mRoot);
    return ans;
}
