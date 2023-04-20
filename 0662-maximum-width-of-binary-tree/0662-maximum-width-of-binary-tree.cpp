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
    int widthOfBinaryTree(TreeNode* root) {
                long long ans=0;
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        while(!q.empty())
        {
            long long sz=q.size();
            ans=max(ans,q.back().second-q.front().second+1);
                for(long long i=0;i<sz;i++)
                {
                    pair<TreeNode*,int>p=q.front();
                    TreeNode*  node=p.first;
                    long long ind=p.second;
                    q.pop();
                    if(node->left)
                    {
                        q.push({node->left,2*ind+1});
                    }
                    if(node->right)
                    {
                         q.push({node->right,2*ind+2});
                    }
                    
                    
                }
            
            
            
            
            
            
        }
       return ans; 
    }
};