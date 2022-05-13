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
#include<algorithm>
#include<vector>
class Solution {
public:
   /* vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        map< int, map<int, multiset<int>> > nodes;
        queue< pair<TreeNode*, pair<int,int> > > sample;
        vector<vector<int>> ans;
        
        if(root == NULL){
            return ans;
        }
        
        sample.push(make_pair(root,make_pair(0,0)));
        
        while(!sample.empty()){
            
            pair<TreeNode*, pair<int,int> > temp = sample.front();
            sample.pop();
            TreeNode* frontnode = temp.first;
            int hd =  temp.second.first;
            int lvl = temp.second.second;
            
            nodes[hd][lvl].insert(frontnode->val);
            
            if(frontnode->left){
                sample.push(make_pair(frontnode->left,make_pair(hd-1,lvl+1)));
            }
            if(frontnode->right){
                 sample.push(make_pair(frontnode->left,make_pair(hd+1,lvl+1)));
            }
        }
        
        for (auto p: nodes) {
            vector<int> v;
            for (auto t: p.second) {
                v.insert(v.end(), t.second.begin(), t.second.end());
            }
            ans.push_back(v);
        }
        return ans;
    }
};*/
vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode*, pair<int, int>>> q;
        
        q.push({root, {0, 0}});
        
        while(q.size() != 0) {
            auto p = q.front();
            q.pop();
            
            TreeNode* n = p.first;
            int x = p.second.first;
            int y = p.second.second;
            
            nodes[x][y].insert(n->val);
            
            if (n->left) {
                q.push({n->left, {x - 1, y + 1}});
            }
            
            if (n->right) {
                q.push({n->right, {x + 1, y + 1}});
            }
        }
        
        vector<vector<int>> ans;
        
        for (auto p: nodes) {
            vector<int> v;
            for (auto t: p.second) {
                v.insert(v.end(), t.second.begin(), t.second.end());
            }
            ans.push_back(v);
        }
        
        return ans;
        
    }
};