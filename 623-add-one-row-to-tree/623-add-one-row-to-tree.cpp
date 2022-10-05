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
/*class Solution {
    
    void solve(TreeNode* root, int val, int depth){
        if(root == NULL){
            return;
        }
        depth = depth -1;
        if(depth==0){
            cout<<root->val<<endl;
          
            TreeNode* temp = new TreeNode(val);
            temp->left = root->left;
            root->left = temp;
            
            temp = new TreeNode(val);
            temp->right = root->right;
            root->right = temp;
            return;
        }
        
        solve(root->left, val, depth);
        solve(root->right, val, depth);
        
        
    }
    
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
          if(depth == 1){
            TreeNode* temp = new TreeNode(val);
            temp->left = root;
            return temp;
        }
        int curr = 1;
        depth = depth -1;
        solve(root, val, depth);
        return root;
    }
};

*/
class Solution {
    
    void solve(TreeNode* root, int val, int depth){
        if(root == NULL){
            return;
        }
        depth = depth -1;
        if(depth==0){
            TreeNode* temp = root->left;
            TreeNode* flag = root->right;
            
            root->left = new TreeNode(val);
            root->right = new TreeNode(val);
            
            root->left->left = temp;
            root->right->right = flag;
            return;
        }
        
        if(root->left){
            solve(root->left, val, depth);
        }
        if(root->right){
            solve(root->right, val, depth);
        }
        
    }
    
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
        if(depth == 1){
            TreeNode* temp = new TreeNode(val);
            temp->left = root;
            return temp;
        }
        int curr = 1;
        depth = depth -1;
        solve(root, val, depth);
        return root;
    }
};