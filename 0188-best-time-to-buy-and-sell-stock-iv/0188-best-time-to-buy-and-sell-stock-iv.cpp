class Solution {
public:
     int rec(vector<int>&v,int ind,int buy,int limit,vector<vector<vector<int>>>&dp)
    {
        if(ind==v.size()||limit==0)
        {
            return 0;
        }
        int profit=0;
         
         if(dp[ind][buy][limit]!=-1)
         {
             return dp[ind][buy][limit];
         }
         
        if(buy)
        {
            profit= max(-1*v[ind]+rec(v,ind+1,0,limit,dp),rec(v,ind+1,1,limit,dp));
            
        }
        else
        {
            profit= max(v[ind]+rec(v,ind+1,1,limit-1,dp),rec(v,ind+1,0,limit,dp));
        }
         
        return dp[ind][buy][limit]= profit;
    }
    
    int maxProfit(int k, vector<int>& prices) {
         vector<vector<vector<int>>>dp(prices.size(),
                                     vector<vector<int>>(2,
                                                         vector<int>(k+1,-1)));
        return rec(prices,0,1,k,dp);
    }
};