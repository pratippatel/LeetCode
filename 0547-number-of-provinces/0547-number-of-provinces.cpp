class Solution {
public:
    
    void CallDfS(unordered_map<int,list<int>> &adjList, vector<int> &visited, int node){
        
        visited[node] = true;
        
        for(auto neighbour: adjList[node]){
            
            if(!visited[neighbour]){
                CallDfS(adjList, visited, neighbour);
            }
        }
         
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        unordered_map<int, list<int>> adjList;
        int n = isConnected.size();
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                
                    if(isConnected[i][j] == 1 && i!=j){
                        adjList[i].push_back(j);
                        adjList[j].push_back(i);
                    }
            }
        }
        
        vector<int> visited(n,0);
        int count =0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                count++;
                CallDfS(adjList, visited,i);
            }
        }
        
        return count;
    }
};