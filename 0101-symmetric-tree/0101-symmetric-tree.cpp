/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
bool symcheck(TreeNode* left,TreeNode* right){
    if(left==NULL && right==NULL)
    return true;
    
    if(left!=NULL && right!=NULL){
         if(left->val==right->val && symcheck(left->left,right->right) && symcheck(left->right,right->left))
        return true;

    }
    
    return false;
             
}

    bool isSymmetric(TreeNode* root) {
    return symcheck(root->left,root->right);
        
    }
};