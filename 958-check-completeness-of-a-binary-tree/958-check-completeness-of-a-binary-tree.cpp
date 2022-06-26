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
    int countNodes(TreeNode* root){
      
        if(root == NULL){
            return 0;
        }
        int left = countNodes(root->left);
        int right = countNodes(root->right);
        
        int ans = 1 +left +right;
        return ans;
    }
    
    bool CheckComplete(TreeNode* root,int index ,int totalNode){
        if(root == NULL){
            return true;
        }
        
        if(index >= totalNode){
            return false;
        }
        
       bool left = CheckComplete(root->left,2*index+1, totalNode);
        bool right = CheckComplete(root->right,2*index+2, totalNode);
        
        return left && right;
    }
    bool isCompleteTree(TreeNode* root) {
       
        
        int countNode = countNodes(root);
        
        return CheckComplete(root, 0, countNode);
        
    }
};