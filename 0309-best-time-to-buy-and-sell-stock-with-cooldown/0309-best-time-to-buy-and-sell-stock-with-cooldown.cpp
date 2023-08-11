class Solution {
public:
    int rec(vector<int>&v,int ind,int buy,vector<vector<int>>&dp)
    {
        
        if(ind>=v.size())
        {
            return 0;
        }
        if(dp[ind][buy]!=-1)
        {
            return dp[ind][buy];
        }
        int profit=0;
        if(buy)
        {
            profit=max(-v[ind]+rec(v,ind+1,0,dp),rec(v,ind+1,1,dp));
            
        }
        else
        {
            profit=max(v[ind]+rec(v,ind+2,1,dp),rec(v,ind+1,0,dp));
        }
         return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        return rec(prices,0,1,dp);
    }
};


