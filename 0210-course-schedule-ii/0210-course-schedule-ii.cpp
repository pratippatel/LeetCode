class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& pre) {
         unordered_map<int,list<int>> adjList;
        
        for(int i=0;i< pre.size();i++){
            
            int u = pre[i][0];
            int v = pre[i][1];
            
            adjList[u].push_back(v);
        }        
        
        
        vector<int> inorder(numCourses,0);
        
        for(auto i : adjList){
            for(auto j : i.second){
                inorder[j]++;
            }
        }
        
        queue<int> q;
        
        for(int i =0;i<inorder.size();i++){
          
            if(inorder[i] == 0){
                q.push(i);
            }
        }
        
        vector<int> ans;
        while(!q.empty()){
            
            int front = q.front();
            q.pop();
            ans.push_back(front);
            for(auto neighbour: adjList[front]){
                
                inorder[neighbour]--;
                if(inorder[neighbour] == 0){
                    q.push(neighbour);
                }
            }
        }
        if(ans.size() == numCourses){
            reverse(ans.begin(),ans.end());
            return ans;
        }
        return {};
    }
};