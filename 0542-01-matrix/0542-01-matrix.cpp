class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int row = mat.size();
        int col = mat[0].size();
        
        vector<vector<int>> visited(row, vector(col,0));
        
        queue<pair<pair<int,int>, int>> q;
        
        vector<vector<int>> ans(row, vector(col,0));
        
        for(int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                if(mat[i][j] == 0){
                    visited[i][j] = 1;
                    ans[i][j] = 0;
                    q.push({{i,j},0});
                }
            }
        }
        
        while(!q.empty()){
            
            int row = q.front().first.first;
            int col = q.front().first.second;
            
            int dist = q.front().second;
            q.pop();
            
           // ans[row][col] = dist;
            if(row + 1 >=0 && row + 1 < mat.size() && !visited[row +1][col]){
                
                q.push({{row+1,col},dist + 1});
                ans[row+1][col] = dist +1;
                visited[row+1][col] = 1;
            }
            if(row - 1 >=0 && row - 1 < mat.size() && !visited[row - 1][col]){
                
                q.push({{row-1,col},dist + 1});
                ans[row-1][col] = dist +1;
                visited[row-1][col] = 1;
            }
            if(col + 1 >=0 && col + 1 < mat[0].size() && !visited[row][col+1]){
                
                q.push({{row,col+1},dist + 1});
                ans[row][col+1] = dist +1;
                visited[row][col+1] = 1;
            }
            if(col - 1 >=0 && col - 1 < mat[0].size() && !visited[row ][col-1]){
                
                q.push({{row,col-1},dist + 1});
                ans[row][col-1] = dist +1;
                visited[row][col-1] = 1;
            }
            
        }
        
        return ans;
        
    }
};