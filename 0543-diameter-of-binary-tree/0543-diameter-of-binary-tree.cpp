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
 int fun(TreeNode* root,int &ans){
    if(root == NULL){
        return 0;
    }
    int l=fun(root->left,ans);
    int r=fun(root->right,ans);
    ans=max(ans,l+r);
    return (1+max(l,r));
 }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root== NULL) return 0;
        int ans=0;
        fun(root,ans);
        return ans;
    }
};