
struct  Node{
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
        print(root->right,ans);
        ans.push_back(root->val);  
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        print(root,ans);
        return ans;
    }
};