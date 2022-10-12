class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
      /*  int n = edges.size();
        
        unordered_map<int,list<int>> adjList;
        
        for(int i=0;i<n;i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        
        for(auto each: adjList){
            
            if(each.second.size() == n){
                return each.first;
            }
            
        }
        return 0;
        */
        
        if(edges[0][1] == edges[1][0] || edges[0][1] == edges[1][1]){
            return edges[0][1];
        }
        return edges[0][0];
        
        
    }
};