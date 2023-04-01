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
        int maxDepth(TreeNode *root)
        {

            if (root == NULL)
                return 0;
            int maxleft_branch = maxDepth(root->left);
            int maxright_branch = maxDepth(root->right);
            return max(maxleft_branch, maxright_branch) + 1;
        }
};