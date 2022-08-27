class Solution {
public:
    int largestInColumn( vector<vector<int>>& grid, int rows, int cols)
    {
        int maxCol = grid[rows][cols]; // initialize the maximum to be value of column c in first row.
        for(int i = 0; i < grid.size(); i++){ // loop through all rows.
            maxCol = max(maxCol, grid[i][cols]);
        }
        return maxCol;
    }
    int largestInRow( vector<vector<int>>& grid, int rows, int cols)
    {
        int maxRow = grid[rows][cols]; 
        for(int i = 0; i < grid.size(); i++){ 
            maxRow = max(maxRow, grid[rows][i]);
        }
        return maxRow;
    }
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int row = 0;
        int col =0;
        
        int incSky = 0;
        for(int i =0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                int rmax = largestInRow(grid,i,j);
                int cmax = largestInColumn(grid,i,j);
                
                cout<<rmax<<" "<<cmax<<endl;
                
                if(min(rmax,cmax) - grid[i][j]> 0){
                    incSky = incSky + min(rmax,cmax) - grid[i][j];               
                }
            }
        }
        
        return incSky;
    }
};