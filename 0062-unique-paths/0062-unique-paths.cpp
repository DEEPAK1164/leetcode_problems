class Solution {
public:
    int dp[101][101];
    int rec(int r,int c ,int m,int n)
    {
        if(c>n||r>m)
        {
            return 0;
        }
        if(c==n-1&&r==m-1)
        {
            return 1;
        }
        if(dp[r][c]!=-1)
        {
            return dp[r][c];
        }
        
        return dp[r][c]= rec(r+1,c,m,n)+rec(r,c+1,m,n);
    }
    int uniquePaths(int m, int n) {
        memset(dp, -1, sizeof(dp));
        int ans=rec(0,0,m,n);
        return ans;
    }
};