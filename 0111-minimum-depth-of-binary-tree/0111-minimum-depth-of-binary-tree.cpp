/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        int minDepth(TreeNode *root)
        {
            if (root == NULL)
                return 0;

            int min_left = minDepth(root->left);
            int min_right = minDepth(root->right);

            if (root->left == NULL)
                return 1 + min_right;
            if (root->right == NULL)
                return 1 + min_left;
            return min(min_left, min_right) + 1;
        }
};