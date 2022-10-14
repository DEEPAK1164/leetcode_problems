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
     TreeNode * markParent(TreeNode*root,unordered_map<TreeNode *,TreeNode *> &ump,int start){
        queue<TreeNode *> q;
        q.push(root);
        TreeNode *target;
        while(!q.empty()){
            TreeNode*parent = q.front();
            if(parent->val == start) target=parent;
            q.pop();
            if(parent->left){
                ump[parent->left]=parent;
                q.push(parent->left);
            }
            if(parent->right){
                ump[parent->right]=parent;
                q.push(parent->right);
            }
        }
        return target;
    }
    int amountOfTime(TreeNode* root, int start) {
        if(!root) return 0;
        unordered_map<TreeNode *,TreeNode *> ump;
        TreeNode *target;
        target=markParent(root,ump,start);
        queue<TreeNode *> q;
        unordered_map<TreeNode *,bool> vis;
        q.push(target);
        vis[target]=true;
        int time=0;
        while(!q.empty()){
        int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode *curr=q.front();
                q.pop();
                if(curr->left && !vis[curr->left]){
                    vis[curr->left]=true;
                    q.push(curr->left);
                }
                if(curr->right && !vis[curr->right]){
                    vis[curr->right]=true;
                    q.push(curr->right);
                }
                if(ump[curr] && !vis[ump[curr]]){
                    vis[ump[curr]]=true;
                    q.push(ump[curr]);
                }
                
            }
            if(!q.empty()) time++;
            
        }
        return time;
    }
};