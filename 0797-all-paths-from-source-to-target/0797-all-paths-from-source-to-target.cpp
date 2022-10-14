class Solution {
public:
    
    void CallDfs(vector<vector<int>> graph, vector<vector<int>> &result,int node,vector<int> ans,int dest){
        
       ans.push_back(node);
        if(node == dest){
                result.push_back(ans);
         }
        for(auto neighbour:graph[node]){
            
            CallDfs(graph,result,neighbour,ans,dest);
            
        }
        ans.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
       
        vector<vector<int>> result;
        int dest = graph.size()-1;
        
        
       
            vector<int> ans;
            //ans.push_back(0);
            CallDfs(graph,result,0,ans,dest);
       
        
        return result;
    }
};