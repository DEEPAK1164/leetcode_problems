class Solution {
public:
    long long f(long long ind,vector<long long>&dp)
    {
       if(ind==0||ind==1)
       {
           return 1;
       }
        if(dp[ind]!=-1)
        {
            return dp[ind];
        }
        return dp[ind]=f(ind-1,dp)+f(ind-2,dp);
    }
    long long climbStairs(long long n) {
        vector<long long>dp(n+1,-1);
        return f(n,dp);
    }
};