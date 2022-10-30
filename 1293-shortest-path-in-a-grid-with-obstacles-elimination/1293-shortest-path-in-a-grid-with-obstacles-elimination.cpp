/*class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        
        
        queue<vector<int>> q;
        
        q.push({0,0,k,0});
        
        vector<vector<int>> visited(grid.size(),vector(grid[0].size(),0));
        visited[0][0] = 1;
        //int dis = 0;
        while(!q.empty()){
            
            int row = q.front()[0];
            int col = q.front()[1];
            
            int obs = q.front()[2];
            int dis = q.front()[3];
            
            
            if(row == grid.size()-1 && col == grid[0].size()-1){
                return dis;
            }
            q.pop();
            
            int delrow[] = {-1,1,0,0};
            int delcol[] = {0,0,1,-1};
            
            for(int i=0;i<4;i++){
                
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                
                if(nrow>=0 && nrow<grid.size() && ncol>=0 && ncol <grid[0].size()){
                    
                    int newobs = obs - grid[nrow][ncol];
                    
                    if(grid[nrow][ncol] == 0 && !visited[nrow][ncol]){
                        visited[nrow][ncol] = 1;
                        q.push({nrow,ncol,newobs,dis+1});
                    }
                    else if(grid[nrow][ncol] == 1 && newobs>0 && !visited[nrow][ncol]){
                       
                        visited[nrow][ncol] = 1;
                        newobs--; 
                        q.push({nrow,ncol,newobs,dis+1});
                    }       
                } 
            }
            
        }
        return -1;
    }
};
*/
class Solution {
public:
    int solve(vector<vector<int>>& grid,int k){
		// At a particular cell we will store the number of obstacles that we can still remove after walking through that cell
        vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size(),-1));
        queue<vector<int>> q;
		
		// queue stores (x,y,current path length,number of obstacles we can still remove)
        q.push({0,0,0,k});
        while(!q.empty()){
            auto t=q.front();
            int x=t[0],y=t[1];
            q.pop();
			
			// Exit if current position is outside of the grid
            if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size()){
                continue;
            }
			
			// Destination found
            if(x==grid.size()-1 && y==grid[0].size()-1)
                return t[2];

            if(grid[x][y]==1){
                if(t[3]>0) // If we encounter an obstacle and we can remove it
                    t[3]--;
                else
                    continue;
            }
			
			// The cell was previously visited by some path and we were able to remove more obstacles from the previous path.
			// Then we don't need to continue on our current path
            if(vis[x][y]!=-1 && vis[x][y]>=t[3])
                continue;
            vis[x][y]=t[3];
            
            q.push({x+1,y,t[2]+1,t[3]});
            q.push({x,y+1,t[2]+1,t[3]});
            q.push({x-1,y,t[2]+1,t[3]});
            q.push({x,y-1,t[2]+1,t[3]});
            
        }
        return -1;
    }
    
    int shortestPath(vector<vector<int>>& grid, int k) {
        return solve(grid,k);
    }
};