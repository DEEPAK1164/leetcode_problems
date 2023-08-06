/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPath(TreeNode *root, vector<TreeNode*>& arr, TreeNode *x)
{
   
    if (!root)
        return false;
   
    arr.push_back(root);   
     
   
    if (root == x)   
        return true;
   
    if (hasPath(root->left, arr, x) ||
        hasPath(root->right, arr, x))
        return true;
   
    arr.pop_back();
    return false;           
}
 
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL || root==p||root==q)
        {
            return root;
        }
        vector<TreeNode*>v1;
        vector<TreeNode*>v2;
         hasPath(root, v1, p);
          hasPath(root, v2, q);
        TreeNode* res;
        for(int i=0;i<min(v1.size(),v2.size());i++)
        {
            if(v1[i]==v2[i])
                continue;
            else
            {
                res=v1[i-1];
                break;
            }
            
        }
        return res;
    }
};