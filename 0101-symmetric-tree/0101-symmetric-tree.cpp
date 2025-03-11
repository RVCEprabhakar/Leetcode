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
bool isMirror(TreeNode* left, TreeNode* right) {
        if (!left && !right) return true;  // Both are null, so they are mirrors
        if (!left || !right) return false; // One is null, the other is not, so not mirrors
        return (left->val == right->val) &&  // Values must be equal
               isMirror(left->left, right->right) &&  // Left subtree of left should match right subtree of right
               isMirror(left->right, right->left);    // Right subtree of left should match left subtree of right

    }
    bool isSymmetric(TreeNode* root) {
        if (!root) return true; // An empty tree is symmetric
        return isMirror(root->left, root->right);
    }
};