class Solution {
public:
    
    int orangesRotting(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int cols = grid[0].size();
        
        vector<vector<int>> visited(row,vector<int> (cols,0));
        int count = 0;
        queue<pair<pair<int,int>,int>> q;
        for(int i =0;i<row;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j] == 2 && !visited[i][j]){
                    q.push({{i,j},count});
                }
            }
        }
        
        
        int tm =0;
        while(!q.empty()){
            
            pair<pair<int,int>,int> front = q.front();
            q.pop();
            int i = front.first.first;
            int j = front.first.second;
            count = front.second;
            tm = max(count,tm);
            
            if(i+1 >=0 && i+1 <row  && !visited[i+1][j] && grid[i+1][j] == 1){
                visited[i+1][j] = 1;
                grid[i+1][j] = 2;
                q.push({{i+1,j},count+1});
            }
            if(i-1 >=0 && i-1 <row  && !visited[i-1][j] && grid[i-1][j] == 1){
                visited[i-1][j] = 1;
                grid[i-1][j] = 2;
                q.push({{i-1,j},count+1});
            }
            if(j+1 >=0 && j+1 <cols && !visited[i][j+1] && grid[i][j+1] == 1){
                visited[i][j+1] = 1;
                grid[i][j+1] = 2;
                q.push({{i,j+1},count+1});
            }
            if(j-1 >=0 && j-1 <cols && !visited[i][j-1] &&grid[i][j-1] == 1){
                visited[i][j-1] = 1;
                grid[i][j-1] = 2;
                q.push({{i,j-1},count+1});
            }
            
        }
        
        for(int i =0;i<row;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return tm;
        
    }
};