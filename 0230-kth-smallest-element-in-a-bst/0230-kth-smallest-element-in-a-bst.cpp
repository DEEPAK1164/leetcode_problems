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
    int kthSmallest(TreeNode* root, int k) {
        int ct = 0;
        int res = 0; // Initialize the result variable
        
        // Call the helper function to perform the search
        kthSmallestHelper(root, k, ct, res);
        
        return res;
    }
    
private:
    // Helper function for kthSmallest
    void kthSmallestHelper(TreeNode* node, int k, int& ct, int& res) {
        if (!node) {
            return; // Base case: reached the end of the tree
        }
        
        // Traverse the left subtree
        kthSmallestHelper(node->left, k, ct, res);
        
        // Process the current node
        ct++; // Increment count of visited nodes
        if (ct == k) {
            res = node->val; // If kth smallest node is found, update the result
            return; // No need to continue further
        }
        
        // Traverse the right subtree
        kthSmallestHelper(node->right, k, ct, res);
    }
};
