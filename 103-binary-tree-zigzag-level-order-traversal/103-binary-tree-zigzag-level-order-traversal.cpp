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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        
        if(root == NULL){
            return result;
        }
        queue<TreeNode*> q;
        
        
        bool leftToRight = true;
        q.push(root);
        
        while(!q.empty()){
            
            int size = q.size();
            vector<int> ans(size);
            
            for(int i =0; i<size;i++){
                
                int index = leftToRight ? i : size-i-1;
                ans[index] = q.front()->val;
                
                if(q.front()->left){
                    q.push(q.front()->left);
                }
                if(q.front()->right){
                    q.push(q.front()->right);
                }
                q.pop();  
            }
            leftToRight = !leftToRight;
            result.push_back(ans);
        }
        return result;
    }
};