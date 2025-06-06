bool hasPathSum(struct TreeNode* root, int targetSum) {
    if (root == NULL) return false;
    if (root->left == NULL && root->right == NULL) return root->val == targetSum;
    int newSum = targetSum - root->val;
    return hasPathSum(root->left, newSum) || hasPathSum(root->right, newSum);
}
