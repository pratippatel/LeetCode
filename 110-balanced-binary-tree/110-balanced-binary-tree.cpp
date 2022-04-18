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
    private: 
    int height(TreeNode* root){
        if(root ==NULL){
            return 0;
        }
        
        int left = height(root->left);
        int right = height(root->right);
        
        int ans = max(left,right) + 1;
        return ans;
    }
    
    private:
    pair<bool,int> isBalancedFast(TreeNode* root){
        if(root == NULL)
        {
            pair<bool,int> p = make_pair(true, 0);
            return p;
        }
        
        pair<bool,int> left = isBalancedFast(root->left);
        pair<bool,int> right = isBalancedFast(root->right);
        
        
        bool height = abs(left.second - right.second) <= 1;
        
        pair<bool, int> p;
        
        if(left.first && right.first && height){
            p.first = true;
            p.second = max(left.second,right.second) +1;
           
        }
        else{
            p.first = false;
            p.second = 0;
        }
         return p;
    }
public:
    bool isBalanced(TreeNode* root) {
        
        return isBalancedFast(root).first;
        
        //Base Case
        /*if(root == NULL){
            return 1;
        }
        bool leftBalance = isBalanced(root->left);
        bool rightBalance = isBalanced(root->right);
        
        int left = height(root->left);
        int right = height(root->right);
        
        cout<<left-right<<" ";
        bool ans = (abs)(left - right) <= 1;
        
        if(leftBalance && rightBalance && ans){
            return true;
        }
        else{
            return false;
        }*/
    }
};