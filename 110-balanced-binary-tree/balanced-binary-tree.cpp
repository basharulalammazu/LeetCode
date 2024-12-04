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
    bool isBalanced(TreeNode* root) 
    {
        if (root == NULL || Height(root) != -1) return true;
        
        return false;
    }


    int Height(TreeNode* root)
    {
        if (root == NULL)
            return 0;

        int leftHeight = Height(root->left);
        int rightHeight = Height(root->right);

        if (leftHeight == -1 || rightHeight == -1 || abs(leftHeight-rightHeight) > 1) return -1;
        return max(leftHeight, rightHeight) + 1;
    }
};