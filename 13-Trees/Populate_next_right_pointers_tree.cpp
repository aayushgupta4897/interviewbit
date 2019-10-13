void connect(TreeLinkNode *a)
{    if(!a){return;}
    
    if(a->left && a->right){ a->left->next = a->right;}
    else{a->left->next = NULL;}
    if(a->right)
    {
    if(a->next){ a->right->next = a->next->left; }
    else{a->right->next = NULL;}
    }
    return connect(a->left);
    return connect(a->right);
}

void Solution::connect(TreeLinkNode *root)
{   if(!root){return;}
    root->next = NULL;
    return connect(root);
}
