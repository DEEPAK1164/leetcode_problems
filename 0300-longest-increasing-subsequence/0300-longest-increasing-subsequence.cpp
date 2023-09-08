class Solution {
public:
    int lengthOfLIS(vector<int>& arr)
    {
        vector<int>dp(arr.size(),0);
        
          int mxx=0;
        for(int i=0;i<dp.size();i++)
        {
          
            int mx=0;
            for(int j=0;j<i;j++)
            {
                if(arr[i]>arr[j])
                {
                    if(dp[j]>mx)
                    {
                        mx=dp[j];
                    }
                }
               
            }
             dp[i]=mx+1;
            mxx=max(dp[i],mxx);
        }
        return mxx;
        
        
        
    }
};