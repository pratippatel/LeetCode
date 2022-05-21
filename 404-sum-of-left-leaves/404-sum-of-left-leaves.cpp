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
    bool isLeaf(TreeNode* root){
        if(root->left == NULL && root->right == NULL){
            return true;
        }
        return false;
    }
    void solve(TreeNode* root, int &sum){
        if(root == NULL){
            return;
        }
        
        if(root->left && isLeaf(root->left)){
            sum = sum + root->left->val;
         }
        
        solve(root->left, sum);
        solve(root->right, sum); 
    }
    
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum =0;
        solve(root, sum);
        return sum;
    }
};