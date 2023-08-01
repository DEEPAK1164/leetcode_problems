
class Solution {
public:
    int mxsum = INT_MIN;
    int maxpathnode(TreeNode* node)
    {
        if (node == NULL) 
        {
            return 0;
        }
        
        int lh = max(0, maxpathnode(node->left)); // Ensure positive or zero value
        int rh = max(0, maxpathnode(node->right)); // Ensure positive or zero value
        mxsum = max(mxsum, lh + rh + node->val);
        return max(lh, rh) + node->val;
    }
    int maxPathSum(TreeNode* root) {
        maxpathnode(root);
        return mxsum;
    }
};
