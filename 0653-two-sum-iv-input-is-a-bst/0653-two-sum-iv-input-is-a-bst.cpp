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
void inorder(TreeNode* root, vector<int>&elements){
    if(root == NULL){
        return ;
    }
    inorder(root->left,elements);
    elements.push_back(root->val);
    inorder(root->right,elements);
}
    bool findTarget(TreeNode* root, int k) {

        vector<int>elements;
        inorder(root,elements);

        //applying two pointer approches here
        int left=0;
        int right=elements.size()-1;
        while(left<right){
            int sum=elements[left]+elements[right];
            if(sum == k) return true;
            if(sum<k) left++;
            else  right--;
        }
        return false;


        
    }
};