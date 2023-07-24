class Solution {
public:
    long long rec(vector<int>& nums,int ind,int x,int p,int n,vector<vector<long long>>&dp)
    {
        if(ind==n)
        {
            return 0;
        }
        if(dp[ind][p]!=-1)
        {
            return dp[ind][p];
        }
        long long take=0;
        long long ntake=0;
        ntake=rec(nums,ind+1,x,p, n,dp);
        if((nums[ind])%2==p)
        {
            take=nums[ind]+rec(nums,ind+1,x,p,n,dp);
        }
        else
        {
            take=nums[ind]-x+rec(nums,ind+1,x,nums[ind]%2,n,dp);
        }
        
        return dp[ind][p]= max(take,ntake);
        
    }
    long long maxScore(vector<int>& nums, int x) {
        int p=nums[0]%2;
        int n=nums.size();
        vector<vector<long long>>dp(n+1,vector<long long>(2,-1));
        return nums[0]+ rec(nums,1,x,p,n,dp);
    }
};