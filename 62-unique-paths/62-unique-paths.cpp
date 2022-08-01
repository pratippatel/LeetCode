/*class Solution {
public:
    
    int solve(int m,int n,int i,int j,vector<vector<int>> &dp){
        
        if(i == n || j == m){
            return 0; // We reach the end of the row or column.
        }
        if(i==n-1 && j == m-1){
            return 1; //We Reached the Destination.
        }
        
        if(dp[i][j]!= -1){
            return dp[i][j];
        }
        return dp[i][j] = solve(m,n,i+1,j,dp)+solve(m,n,i,j+1,dp);
    }
    int uniquePaths(int m, int n) {
        int i = 0, j = 0;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solve(m,n,i,j, dp);
    }
};*/

class Solution {
public:
    int help(int i,int j,int m,int n,vector<vector<int>>&dp)
    {
        if(i>=m || j>=n )return 0;
        if(i==(m-1) && j==(n-1))return 1;
        if(dp[i][j]!=-1)return dp[i][j];
       return dp[i][j]= help(i+1,j,m,n,dp)+help(i,j+1,m,n,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return help(0,0,m,n,dp);
    }
};