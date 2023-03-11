/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
    
        vector<int>v;
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        int n=v.size();
            n--;
        TreeNode* root=bst(v,0,n);
        return root;
                
        
        
    }
};