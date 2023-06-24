class Solution {
public:
    int rec(int r,int c,int n,int m,vector<vector<int>>&v,vector<vector<int>>&dp)
    {
       
        if((r>=n)||(c>=m)||(v[r][c]==1))
            return 0;
        if(r==(n-1)&&c==(m-1))
            return 1;
        if(dp[r][c]!=-1)
            return dp[r][c];
        
        return dp[r][c]= rec(r+1,c,n,m,v,dp)+rec(r,c+1,n,m,v,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
     
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
          vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int ans=rec(0,0,n,m,obstacleGrid,dp);
        return ans;
    }
};