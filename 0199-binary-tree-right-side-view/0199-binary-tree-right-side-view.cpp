/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNo(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void rv(TreeNode* root,int level,vector<int>&v)
    {
       // vector<int>v;
        if(root==NULL)
        {
            return ;
        }
        if(v.size()==level)
            v.push_back(root->val);
        rv(root->right,level+1,v);
        rv(root->left,level+1,v);
    
        
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        rv(root,0,ans);
        return ans;
    }
};