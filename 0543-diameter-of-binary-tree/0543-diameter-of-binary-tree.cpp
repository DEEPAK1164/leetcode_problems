class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }

    int height(TreeNode* root, int& diameter) {
        if (root == NULL)
            return 0;

        int lh = height(root->left, diameter);
        int rh = height(root->right, diameter);

        // Update the diameter by checking if the current node's diameter is greater
        // than the previous diameter.
        diameter = max(diameter, lh + rh);

        // Return the height of the current node's subtree.
        return 1 + max(lh, rh);
    }
};
