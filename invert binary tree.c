struct TreeNode* invertTree(struct TreeNode* root) {
        struct TreeNode* temp;
        if(root==NULL)
            return root;
        invertTree(root->left);
        invertTree(root->right);
        temp=root->left;
        root->left=root->right;
        root->right=temp;
        return root;
    
}
