class Solution {
public:
    int rec(int r,int c,int m,int n,vector<vector<int>>&v,vector<vector<int>>&dp)
    {
       
        if((r<0)||(c<0)||(v[r][c]==1))
            return 0;
        if(r==0&&c==0)
            return 1;
        if(dp[r][c]!=-1)
            return dp[r][c];
        
        return dp[r][c]= rec(r-1,c,m,n,v,dp)+rec(r,c-1,m,n,v,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
     
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
          vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        int ans=rec(m-1,n-1,m,n,obstacleGrid,dp);
        return ans;
    }
};