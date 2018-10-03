


int height( TreeNode *root )
{
    if(root==NULL){return 0;}
    return 1 + max( height(root->left) , height(root->right));
}

void bfs(TreeNode *root , int h , vector<int> &v )
{   if(root==NULL){return; }
    if(h==1){ v.push_back(root->val) ;}
    else
    {
        bfs( (*root).left , h-1 , v);
        bfs( (*root).right , h-1 , v);

    }
}




vector<vector<int> > Solution::levelOrder(TreeNode *root)
{
    vector< vector<int> > v;
    int h = height(root);

    for(int i=1 ; i<=h ; i++)
    {
        vector<int> z;
        bfs(root , i , z);
        v.push_back(z);
    }
    
    return v;
}