int countNodes(struct TreeNode* root) {
    // Base case: if the root is NULL, return 0
    if (root == NULL) {
        return 0;
    }

    // Recursively count nodes in the left and right subtrees, then add 1 for the current node
    int leftCount = countNodes(root->left);
    int rightCount = countNodes(root->right);

    return leftCount + rightCount + 1;
    
}
