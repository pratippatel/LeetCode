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
    
    void solve(TreeNode* root, vector<int> &tree){
        if(root == NULL){
            return;
        }
        
        
        solve(root->left, tree);
        tree.push_back(root->val);
        solve(root->right, tree);
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector<int> tree1;
        vector<int> tree2;
        
        solve(root1, tree1);
        solve(root2, tree2);
        
        vector<int> ans;
        
        int i = 0;
        int j =0;
        
        while(i<tree1.size() && j<tree2.size()){
            if(tree1[i]<tree2[j]){
                ans.push_back(tree1[i]);
                i++;
            }
            else{
                ans.push_back(tree2[j]);
                j++;
            }    
        }
        while(j<tree2.size()){
            ans.push_back(tree2[j]);
            j++;
        }
        while(i<tree1.size()){
            ans.push_back(tree1[i]);
            i++;
        }
        return ans;
    }
};