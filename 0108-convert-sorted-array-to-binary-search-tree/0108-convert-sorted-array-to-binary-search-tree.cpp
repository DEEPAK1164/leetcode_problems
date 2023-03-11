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
     TreeNode* bst(vector<int>&arr,int l,int h)
    {
        if(l>h)
            return NULL;
        int mid=(l+h)/2;
        
        TreeNode* root=new TreeNode(arr[mid]);
        root->left=bst(arr,l,mid-1);
          root->right=bst(arr,mid+1,h);
        return root;   
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int n=nums.size();
            n--;
        TreeNode* root=bst(nums,0,n);
        return root;  
    }
};