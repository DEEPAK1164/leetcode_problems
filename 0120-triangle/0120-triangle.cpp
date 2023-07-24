class Solution {
public:
    int rec(int r,int c,vector<vector<int>>& triangle,vector<vector<int>>&dp)
    {
        if(r==triangle.size()-1)
        {
            return triangle[r][c];
        }
        if(dp[r][c]!=-1)
        {
            return dp[r][c];
        }
       int p1=triangle[r][c]+rec(r+1,c,triangle,dp);
        int p2=triangle[r][c]+rec(r+1,c+1,triangle,dp);
        return dp[r][c]= min(p1,p2);
        
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>>dp(202,vector<int>(202,-1));
        return rec(0,0,triangle,dp);
    }
};