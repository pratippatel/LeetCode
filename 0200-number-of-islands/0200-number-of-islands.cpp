class Solution {
public:
    
    void CallBFS(vector<vector<char>> &grid, vector<vector<int>> &visited, int i, int j){
        
        queue<pair<int,int>> q;
        q.push({i,j});
        
        while(!q.empty()){
            
            pair<int,int> p = q.front();
            q.pop();
            
            int i = p.first;
            int j = p.second;
            
            if(i>0 && !visited[i-1][j] && grid[i-1][j] == '1'){
                visited[i-1][j] = 1;
                q.push({i-1,j});
            }
            if(j>0 && !visited[i][j-1] && grid[i][j-1] == '1'){
                visited[i][j-1] = 1;
                q.push({i,j-1});
            }
            if(j<grid[0].size()-1 && !visited[i][j+1] && grid[i][j+1] == '1'){
                visited[i][j+1] =1;
                q.push({i,j+1});
            }
            if(i<grid.size()-1 && !visited[i+1][j] && grid[i+1][j] == '1'){
                visited[i+1][j] =1;
                q.push({i+1,j});
            }
            
        }
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        
        
        vector<vector<int>> visited(row,vector(col,0));
        
        int count = 0;
        for(int i =0;i<row;i++){
            for(int j =0;j<col;j++){
                
                if(grid[i][j] == '1' && !visited[i][j]){  
                    count++;
                    visited[i][j] = 1;
                    CallBFS(grid, visited, i,j);
                }
            }
        }
        return count; 
    }
};