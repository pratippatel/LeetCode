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
        int height(struct TreeNode* root){
            if(root == NULL){
                return 0;
            }
            
            int left = height(root->left);
            int right = height(root->right);
            
            int ans  = max(left,right) + 1;
            
            return ans;
        }
    
private:
    pair<int,int> diameterFast(TreeNode* root){
        
        if(root == NULL){
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        
        pair<int,int> left =  diameterFast(root->left);
        pair<int,int> right = diameterFast(root->right);
        
        int op1 = left.first;
        int op2 = right.first;
        int height = left.second + right.second;
        
        pair<int,int> ans;
        ans.first = max(op1,max(op2,height));
        ans.second = max(left.second, right.second) + 1;
                
        return ans;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        return diameterFast(root).first;
        /*if(root == NULL){
            return 0;
        }
        
        int left = diameterOfBinaryTree(root->left);
        int right = diameterOfBinaryTree(root->right);
        //int mid = height(root->left) + height(root->right)+1; if edges are to be counted.
        int mid = height(root->left) + height(root->right);
        
        int dia = max(left, max(right, mid));        
        
        return dia;*/
            
    }
};