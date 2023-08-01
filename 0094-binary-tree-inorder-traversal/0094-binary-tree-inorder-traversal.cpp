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
    vector<int> inorderTraversal(TreeNode* root) {
     vector<int>v;
        stack<TreeNode*> st;
        TreeNode* curr = root;

        while (curr || !st.empty()) {
            // Traverse to the leftmost node
            while (curr) {
            st.push(curr);
                curr = curr->left;
            }

            curr =st.top();
            st.pop();
            v.push_back(curr->val);

            // Move to the right subtree
            curr = curr->right;
        }

        return v;
    }
};
