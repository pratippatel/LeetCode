class Solution {
public:
    
    bool CallDfs(int i , vector<vector<int>>&graph, unordered_map<int,bool> &visited, unordered_map<int,bool> &dfsCall,vector<int> &check){
        
        visited[i] = true;
        dfsCall[i] = true;
        check[i] = 0;
        for(auto neighbour: graph[i]){
            
            if(!visited[neighbour]){
                if(CallDfs(neighbour, graph, visited, dfsCall,check)){
                    return true;
                }
            }
            else if(dfsCall[neighbour]){
                check[i] = 0;
                
                return true;
            }
            
        }
        check[i]=1;
        dfsCall[i] = false;
        return false;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        unordered_map<int,bool> visited;
        unordered_map<int,bool> dfsCall;
        
        vector<int> check(graph.size(),0);
        for(int i = 0;i< graph.size();i++){
            if(!visited[i]){
                CallDfs(i, graph,visited, dfsCall,check);    
            }
            
        }
        
        vector<int> ans;
        for(int i =0 ;i<check.size();i++){
            
            if(check[i]){
                ans.push_back(i);
            }
            
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};