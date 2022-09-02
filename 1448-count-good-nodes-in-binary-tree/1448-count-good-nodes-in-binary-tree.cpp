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
    
    void solve(TreeNode* root, int maxi, int &ans){
        
        if(root == NULL){
            return;
        }
        
        if(root->val>=maxi){
            ans++;
            cout<<ans<<endl;
            maxi = root->val;
        }
        
         solve(root->left, maxi, ans); 
         solve(root->right, maxi, ans) ;
       // return ans;
    }
    
    
    int goodNodes(TreeNode* root) {
        
        int maxi = INT_MIN;
        int ans = 0;
        solve(root, maxi,ans);
        return ans;
    }
};