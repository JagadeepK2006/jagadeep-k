int maxDepth(struct TreeNode* root) {
    
    int l,r;
    if(!root)return 0;
    l = maxDepth(root->left)+1;
    r = maxDepth(root->right)+1;
    return l>r?l:r;

}
