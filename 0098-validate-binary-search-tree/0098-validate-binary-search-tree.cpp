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
     bool ValidBST(TreeNode* root, long int minVal, long int maxVal) {
        if(!root) 
            return true;
        if(root->val >= maxVal || root->val <= minVal) 
            return false;
        return ValidBST(root->left, minVal, root->val) && ValidBST(root->right, root->val, maxVal);
    }
    bool isValidBST(TreeNode* root) {
        return ValidBST(root, LONG_MIN, LONG_MAX);
    }
    
    
};