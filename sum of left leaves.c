/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sumOfLeftLeaves(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    int count = 0;

    // Check if the left child is a left leaf
   
    if (root->left != NULL && root->left->left == NULL && root->left->right == NULL) {
        count += root->left->val;
    }

    // Recursively calculate the sum of left leaves in the left and right subtrees
    count += sumOfLeftLeaves(root->left);
    count += sumOfLeftLeaves(root->right);

    return count;
}
