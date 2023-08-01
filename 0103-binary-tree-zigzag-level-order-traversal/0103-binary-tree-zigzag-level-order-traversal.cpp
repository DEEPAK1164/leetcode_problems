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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root==NULL)
            return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>p;
            int sz=q.size();
           while(sz--)
           {
               TreeNode* node=q.front();
               q.pop();
               p.push_back(node->val); 
               if(node->left)
               {
                   q.push(node->left);
               }
               if(node->right)
               {
                   q.push(node->right);
               }
           }
            v.push_back(p);   
        }
        for(int i=0;i<v.size();i++)
        {
            if(i%2==1)
            {
                reverse(v[i].begin(),v[i].end());
            }
        }
        
        return v;
    }
};