class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sm=0;
        int mx=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            sm=sm+nums[i];
            mx=max(mx,sm);
            if(sm<0)
                sm=0;
        }
        return mx;
    }
};