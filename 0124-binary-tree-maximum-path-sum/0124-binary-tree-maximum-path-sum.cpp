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
int maxgain(TreeNode* root,int &maxi){
    if(root==NULL){
        return 0;
    }
    
    int left =max(maxgain(root->left,maxi),0);
    int right =max(maxgain(root->right,maxi),0);
    maxi=max(maxi,(root->val+left+right));
    return root->val + max(left,right);

}
    int maxPathSum(TreeNode* root) {

        int maxi=INT_MIN;
        maxgain(root,maxi);
        return maxi;
        
    }
};