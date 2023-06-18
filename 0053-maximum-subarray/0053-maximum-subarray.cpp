class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx=INT_MIN;
        int sm=0;
        int n=nums.size();
        for(int i=0;i<n;i++ )
        {
            sm+=nums[i];
             mx=max(sm,mx);
            if(sm<0)
            {
                sm=0;
            }
           
        }
        return mx;
    }
};