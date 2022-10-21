class Solution {
public:
    void solve(vector<vector<char>>& board) {
        
        int row= board.size();
        int col = board[0].size();
        
        vector<vector<int>> visited(row, vector(col,0));
        queue<pair<int,int>> q;
        vector<pair<int,int>> ans;
        
        for(int i =0;i< row;i++){
            for (int j =0;j<col;j++){
                
                if(board[i][j] == 'O' && (i == 0 || i == row-1 || j == 0 || j== col-1)){
                    q.push({i,j});
                    visited[i][j] = 1;
                    ans.push_back({i,j});
                }
            }
        }
        
        while(!q.empty()){
            
            int row = q.front().first;
            int col = q.front().second;
            
            q.pop();
            
            int delrow[] = {+1,-1,0,0};
            int delcol[] = {0,0,1,-1};
            
            for(int i=0;i<4; i++){
                    int nrow = row + delrow[i];
                    int ncol = col + delcol[i];
                    
                    if(nrow >0 && ncol>0 && nrow< board.size() && ncol< board[0].size() 
                       && !visited[nrow][ncol] && board[nrow][ncol] == 'O' ){
                       
                        ans.push_back({nrow,ncol});
                        q.push({nrow,ncol});
                        visited[nrow][ncol] = 1;
                    }
                }    
            }   
            for(int i=0;i< row;i++){
                for(int j=0;j<col;j++){
                    board[i][j] = 'X';  
                }
            }
            for(int i=0;i< ans.size();i++){
                board[ans[i].first][ans[i].second] = 'O';
            }
    }
};