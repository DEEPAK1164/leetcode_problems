
 struct Node {
    int data;
   Node *left;
   Node *right;
      Node(int val)
 {
 data=val;
          left=right=NULL;
 }
  };

class Solution {
    public:
    void print(TreeNode* root,vector<int>&ans)
    {
        if(root==NULL)
        {
            return;
        }
        
        print(root->left,ans);
        ans.push_back(root->val);
          
        print(root->right,ans);
        
        
        
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        print(root,ans);
        return ans;
    }
};