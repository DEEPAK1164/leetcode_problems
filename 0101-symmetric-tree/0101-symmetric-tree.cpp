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
    bool isMirror(struct TreeNode* root1, struct TreeNode* root2)
{
    // If both trees are empty, then they are mirror images
    if (root1 == NULL && root2 == NULL)
        return true;
 
    
    if (root1!=NULL && root2!=NULL && root1->val == root2->val)
        return isMirror(root1->left, root2->right)
               && isMirror(root1->right, root2->left);
 
    // if none of above conditions is true then root1
    // and root2 are not mirror images
    return false;
}
    bool isSymmetric(TreeNode* root) {
        return isMirror(root, root);
    }
};