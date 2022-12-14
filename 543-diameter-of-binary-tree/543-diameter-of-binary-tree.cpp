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
    int height(TreeNode* root, int &ans)
    { if (root == NULL)
        return 0;
 
    int lh = height(root->left, ans);
 
    int rh = height(root->right, ans);
 
    // update the answer, because diameter of a
    // tree is nothing but maximum value of
    // (left_height + right_height + 1) for each node
    ans = max(ans, lh + rh);
 
    return 1 + max(lh, rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
       if (root == NULL)
        return 0;
    int res = INT_MIN; // This will store the final answer
    height(root, res);
    return res;
        
    }
};