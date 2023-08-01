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
    vector<int> postorderTraversal(TreeNode* root) {
          stack<TreeNode*>st;
        stack<int>stt;
        st.push(root);
        vector<int>v;
        if(root==NULL)
        {
            return v;
        }
        
        while(!st.empty())
        {
            root=st.top();
           
            st.pop();
             stt.push(root->val);
            if(root->left)
            {
                st.push(root->left);
                
            }
             if(root->right)
            {
                st.push(root->right);
            }
            
        }
        while(!stt.empty())
        {
            v.push_back(stt.top());
            stt.pop();
        }
        
        return v;
    }
};