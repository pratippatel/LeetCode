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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
       
        vector<vector<int>> ans;
        if(root== NULL){
            return ans;
        }
        queue<TreeNode*> temp;
        
        temp.push(root);
        
        while(!temp.empty()){
            vector<int> v;
            int size = temp.size();
            for(int i=0;i<size;i++){
                TreeNode* frontnode = temp.front();
                temp.pop();

                v.push_back(frontnode->val); 
                if(frontnode->left){
                    temp.push(frontnode->left);
                }
                if(frontnode->right){
                    temp.push(frontnode->right);
                }
            }
            
        ans.push_back(v);
        } 
        return ans;
    }
};