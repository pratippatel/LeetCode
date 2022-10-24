class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        
        vector<vector<int>> visited(row,vector(col,0));
        
        queue<pair<int,int>> q;
        
        int count = 0;
        int connected = 0;
        for(int i=0;i<grid.size();i++){
           for(int j =0;j<grid[0].size();j++){
               if(grid[i][j] == 1 && (i== 0 || i == grid.size()-1 || j == 0 || j == grid[0].size()-1)){
                   q.push({i,j});
                   visited[i][j] = 1;
                   connected++;
               }
               if(grid[i][j] == 1){
                   count++;
               }
           }
            
        }
        //cout<<connected<<"  "<<count<<endl;
        while(!q.empty()){
            
            int row = q.front().first;
            int col = q.front().second;
            
            q.pop();
            
            int delrow[] = {1,-1,0,0};
            int delcol[] = {0,0,1,-1};
            
            for(int i=0;i<4;i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                
                if(nrow>=0 && nrow<grid.size() && ncol>=0 && ncol < grid[0].size() && !visited[nrow][ncol]
                   && grid[nrow][ncol] == 1){
                    //cout<<nrow<<"  "<<ncol<<endl;
                    visited[nrow][ncol] =1;
                    q.push({nrow,ncol});
                    connected++;
                }      
            }
        }
        return count - connected;
    }
};