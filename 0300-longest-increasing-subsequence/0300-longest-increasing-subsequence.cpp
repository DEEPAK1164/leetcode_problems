class Solution {
public:
    int rec(int ind,int pid,vector<int>&nums,vector<vector<int>>&dp)
    {
        int n=nums.size();
        if(ind==n)
        {
            return 0;
        }
        if(dp[ind][pid+1]!=-1)
        {
            return dp[ind][pid+1];
        }
        int nt=0+rec(ind+1,pid,nums,dp);
        int t=0;
        if(pid==-1||nums[ind]>nums[pid])
        {
            t=1+rec(ind+1,ind,nums,dp);
        }
        return dp[ind][pid+1]= max(nt,t);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
         vector<vector<int>> dp(n,vector<int>(n+1,-1));
    
    return rec(0,-1,nums,dp);
    }
};