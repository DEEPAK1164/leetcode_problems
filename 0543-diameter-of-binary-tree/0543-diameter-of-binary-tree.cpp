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
    int mx=INT_MIN;
    int height(TreeNode* root)
    { 
        if (root == NULL)
        return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return 1 + max(lh, rh);
    }
    void pre(TreeNode* root)
    {
        if(root==NULL)
            return;
        mx=max(mx,height(root->left)+height(root->right)); 
        pre(root->left);
        pre(root->right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
       if (root == NULL)
        return 0;
        pre(root);
        return mx;
        
        
   
    }
};