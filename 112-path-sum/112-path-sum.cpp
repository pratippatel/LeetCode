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
    
    void solve(TreeNode* root,int targetSum,int sum, bool &ans){
        if(root==NULL) return ;
        if(root->left == NULL && root->right == NULL){
                sum = sum + root->val;
                cout<<sum<<endl;
                if(sum == targetSum){
                    ans = true;
                    cout<<ans<<endl;
                    return;
                }
            }
            sum  = sum + root->val;
            
            solve(root->left, targetSum, sum, ans);
            solve(root->right, targetSum, sum, ans);
        }
        
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        bool ans = false;
        solve(root, targetSum, sum, ans);
        return ans;
    }
};