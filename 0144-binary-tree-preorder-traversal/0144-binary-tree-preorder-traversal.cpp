

class Solution {
public:
    void print(TreeNode* root,vector<int>&v)
    {
        if(root==NULL)
        {
            return;
        }
        v.push_back(root->val);
        print(root->left,v);
         print(root->right,v);
        
        
        
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
     print(root,v);
        return v;
     
    }
};