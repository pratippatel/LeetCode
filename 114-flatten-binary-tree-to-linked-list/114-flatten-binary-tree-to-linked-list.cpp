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

    
//Recursion
TreeNode* previous=NULL;
void flatten(TreeNode* root) {
   /* if(root==NULL){return;}
    
    flatten(root->right);
    flatten(root->left);
    
    root->right=previous;
    root->left=NULL;
    //update previous
    previous=root;*/
    
    //Morris Traversal
    TreeNode* curr = root;
    while(curr!=NULL){
        
        if(curr->left){
            TreeNode* prev = curr->left;
            while(prev->right){
                prev = prev->right;
            }
            prev->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
            
        }
        curr= curr->right;
        }
    }
};