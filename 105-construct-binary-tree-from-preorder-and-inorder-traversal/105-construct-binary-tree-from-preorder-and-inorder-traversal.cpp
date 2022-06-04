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
    int FindPosition(int val, vector<int> &inorder){
        for(int i=0; i<inorder.size();i++){
            if(val == inorder[i]){
                return i;
            }
        }
        return -1;
    }
    
    TreeNode* solve(vector<int> &preorder, vector<int> &inorder, int start, int end, int &preindex, int size){
        
        if(preindex>=size || start> end){
            return NULL;
        }
        
        TreeNode* root = new TreeNode(preorder[preindex]);
        int position = FindPosition(root->val, inorder);
        preindex++;
        
        root->left = solve(preorder, inorder, start, position-1, preindex,size);
        root->right = solve(preorder, inorder, position+1, end, preindex, size);
        
        return root;
        
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int n = preorder.size();
        int preindex = 0;
        TreeNode* temp = solve(preorder, inorder, 0, n-1, preindex, n);
        return temp;
    }
    
};