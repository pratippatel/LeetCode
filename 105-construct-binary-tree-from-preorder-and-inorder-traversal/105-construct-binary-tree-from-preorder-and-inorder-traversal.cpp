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
    
    int findPosition(int value, vector<int> inorder){
        
        for(int i=0;i<inorder.size();i++){
            
            if(inorder[i] == value){
                return i;
            }
        }
        return -1;
    }
    
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int &preInd, int inStart, int inEnd, int n){
        
        if(preInd> n || inStart > inEnd){
            return NULL;
        }
        
        TreeNode* temp = new TreeNode(preorder[preInd++]);
        int position = findPosition(temp->val, inorder);
        
        temp->left = solve(preorder, inorder, preInd, inStart, position-1,n);
        temp->right = solve(preorder, inorder, preInd, position + 1, inEnd,n);
        
        return temp;
        
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int preInd = 0;
        int n = preorder.size();
        TreeNode* ans = solve(preorder, inorder, preInd, 0, inorder.size()-1, n);
        
        return ans;
        
        
    }
};