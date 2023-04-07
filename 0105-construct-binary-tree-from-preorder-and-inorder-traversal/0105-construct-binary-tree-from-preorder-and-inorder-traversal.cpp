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
    int preIndex=0;
TreeNode *cTree(vector<int>&inorder,vector<int>&preorder,int is,int ie,unordered_map<int,int>&mp){
    if(is>ie)return NULL;
    TreeNode *root=new TreeNode(preorder[preIndex++]);
    
    int inIndex=mp[root->val];
   
    root->left=cTree(inorder, preorder, is, inIndex-1,mp);
    root->right=cTree(inorder, preorder, inIndex+1, ie,mp);
    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>mp;
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        int is=0;
        int ie=inorder.size()-1;
        TreeNode* root=cTree(inorder,preorder,0,ie,mp);
        return root;
        
    }
};