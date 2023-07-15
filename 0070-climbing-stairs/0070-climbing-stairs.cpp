class Solution {
public:
    long long f(long long ind,vector<long long>&dp)
    {
       dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=ind;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[ind];
       
    }
    long long climbStairs(long long n) {
        vector<long long>dp(n+1,-1);
        return f(n,dp);
    }
};