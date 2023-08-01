class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // If both nodes are NULL, they are the same
        if (p == NULL && q == NULL)
            return true;

        // If only one of the nodes is NULL, they are different
        if (p == NULL || q == NULL)
            return false;

        // Compare the current node's value and recursively check left and right subtrees
        if (p->val == q->val)
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);

        // If the current node's value is different, the trees are different
        return false;
    }
};
