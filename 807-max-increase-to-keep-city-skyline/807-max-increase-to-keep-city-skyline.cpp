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
        int row = 0;
        int col =0;
        
        int incSky = 0;
        for(int i =0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                pair<int, int> p = largestInColumn(grid,i,j);
                int rmax = p.first;
                int cmax = p.second;//largestInColumn(grid,i,j).second;
                
                cout<<rmax<<" "<<cmax<<endl;
                
                if(min(rmax,cmax) - grid[i][j]> 0){
                    incSky = incSky + min(rmax,cmax) - grid[i][j];               
                }
            }
        }
        
        return incSky;
    }
};