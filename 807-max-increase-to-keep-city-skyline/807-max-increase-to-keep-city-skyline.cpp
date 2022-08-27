class Solution {
public:
    pair<int,int> largestInColumn( vector<vector<int>>& grid, int rows, int cols)
    {
        int maxCol = grid[rows][cols]; 
        int maxRow = grid[rows][cols]; 
        for(int i = 0; i < grid.size(); i++){ 
             maxCol = max(maxCol, grid[i][cols]);
             maxRow = max(maxRow, grid[rows][i]);
        }
        return {maxRow,maxCol};
    }
   /* int largestInRow( vector<vector<int>>& grid, int rows, int cols)
    {
        int maxRow = grid[rows][cols]; 
        for(int i = 0; i < grid.size(); i++){ 
            maxRow = max(maxRow, grid[rows][i]);
        }
        return maxRow;
    }*/
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
        int n = grid.size();
        vector<int> row(n);
        vector<int> col(n);
        int incSky = 0;
        for(int i =0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
               
                row[i] = max(row[i],grid[i][j]);
                col[j] = max(col[j], grid[i][j]);
                
            }
        }
        for(int i =0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                if(min(row[i],col[j]) - grid[i][j]> 0){
                    incSky = incSky + min(row[i],col[j]) - grid[i][j];               
                }
            }
        }
       
        return incSky;
    }
};