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
    
    void solve(TreeNode* root, int &depth, int count){
        if(root==NULL) return;
        if(root->left == NULL && root->right == NULL){
            depth =  min(depth, count);
            return;
        }
        
        count = count + 1;
        solve(root->left, depth, count);
        solve(root->right, depth, count);
    }
public:
    int minDepth(TreeNode* root) {
        int depth = INT_MAX;
        if(root==NULL) return 0;
        int count = 1;
        solve(root, depth, count);
        return depth;
        
    }
};