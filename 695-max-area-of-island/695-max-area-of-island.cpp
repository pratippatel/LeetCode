/*class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int currCount = 0;
        
        int maxCount = INT_MIN;
        
        
        for(int i = 0;i<row;i++){
            currCount = 0;
            for(int j=0;j<col;j++){
                if(grid[i][j] == 1){
                    currCount++;
                    while((grid[i+1][j]==1 && i< row) || (grid[i][j+1]==1 && j<col) ||
                          (grid[i-1][j]==1 && i>0) || (grid[i][j-1]==1 && j>0)){
                        currCount++;
                    }
                    maxCount = max(currCount, maxCount);
                }
            }
        }
        return maxCount;
    }
};*/
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++) 
            for (int j = 0; j < m; j++)
                if (grid[i][j]) ans = max(ans, trav(i, j, grid));
        return ans;
    }
private:
    int n, m;
    int trav(int i, int j, vector<vector<int>>& grid) {
        if (i < 0 || j < 0 || i >= n || j >= m || !grid[i][j]) return 0;
        grid[i][j] = 0;
        return 1 + trav(i-1, j, grid) + trav(i, j-1, grid) + trav(i+1, j, grid) + trav(i, j+1, grid);
    }
};