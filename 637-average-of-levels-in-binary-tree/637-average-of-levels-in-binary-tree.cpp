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
    vector<double> averageOfLevels(TreeNode* root) {
        
        
        queue<TreeNode*> q;
        q.push(root);
        
        vector<double> ans;
        while(!q.empty()){
            
            //TreeNode* front = q.front();
            double temp = 0;
            
            int size = q.size();
            for(int i = 0;i<size;i++){
                
                TreeNode* front = q.front();
                q.pop();
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
                temp = temp + front->val;
            }
            ans.push_back(temp/size);
        }
        return ans;
    }
};