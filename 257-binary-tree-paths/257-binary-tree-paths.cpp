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
#include<string>
class Solution {
    void solve(TreeNode* root, vector<string> &res, string ans){
       if(root == NULL) return;
        ans += to_string(root->val);
        if(root->left || root->right)
            ans += "->";
        if(!root->left && !root->right) {
           res.push_back(ans);
            return;
        } 
        solve(root->left, res, ans);
        solve(root->right, res, ans);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string> res;
        string ans = "";
        solve(root, res, ans);
        return res;
    }
};