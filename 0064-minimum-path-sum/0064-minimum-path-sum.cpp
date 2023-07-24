class Solution {
public:
   
int rec(int i, int j,vector<vector<int>> &matrix,vector<vector<int>> &dp)
{
  if(i==0 && j == 0)
    return matrix[0][0];
  if(i<0 || j<0)
    return 1e9;
  if(dp[i][j]!=-1) return dp[i][j];
    
  int p1 = matrix[i][j]+rec(i-1,j,matrix,dp);
  int p2 = matrix[i][j]+rec(i,j-1,matrix,dp);
  
  return dp[i][j] = min(p1,p2);
  
}

int minPathSum(vector<vector<int> > &grid){
    int n=grid.size();
    int m=grid[0].size();
    vector<vector<int> > dp(n,vector<int>(m,-1));

    return rec(n-1,m-1,grid,dp);
    
}
};
