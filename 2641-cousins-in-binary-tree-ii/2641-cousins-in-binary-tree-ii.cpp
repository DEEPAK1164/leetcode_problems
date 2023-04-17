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
    TreeNode* replaceValueInTree(TreeNode* root) {
        root->val=0;
        queue<TreeNode*>q;
        q.push(root);
        int l=0;
        while(!q.empty())
        {
            vector<TreeNode*>v;
            int sm=0;
            int sz=q.size();
            for(int i=0;i<sz;i++)
            { 
            TreeNode* node=q.front();
                v.push_back(node);
            q.pop();
                if(node->left)
                {
                    q.push(node->left);
                    sm+=node->left->val;
                }
                if(node->right)
                {
                    q.push(node->right);
                    sm+=node->right->val;
                }    
            }
            for(auto node: v){
            int  t = sm;
            if(node->left)  t -= node->left->val;
            if(node->right) t -= node->right->val;
            if(node->left)  node->left->val = t;
            if(node->right) node->right->val = t;
        }
        }
        return root;
    }
};