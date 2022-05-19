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
    
    bool solve(TreeNode* root1, TreeNode* root2){
        if(root1 == NULL && root2 == NULL){
            return true;
        }
        	
 //      CONDITIONS FOR SYMMETRIC TREE :
 //              1. BOTH THE ROOT VALUES HAVE SAME VALUES
 //              2. LEFT SUBTREE OF LEFT TREE == RIGHT SUBTREE OF RIGHT TREE
 //                 1->2->3 == 1->2->3  (ACCORDING TO EXAMPLE  1)
 //              3. RIGHT SUBTREE OF LEFT TREE == LEFT SUBTRE OF RIGHT TREE
 //                  1->2->4 == 1->2->4  (ACCORDING TO EXAMPLE 1)
        if(root1 && root2 && (root1->val == root2->val) ){
            return solve(root1->left, root2->right) && solve(root1->right,root2->left);
        }
        return false;
    }
public:
    bool isSymmetric(TreeNode* root) {
        
        if(root == NULL){
            return false;
        }
  
        return solve(root,root);

    }
};