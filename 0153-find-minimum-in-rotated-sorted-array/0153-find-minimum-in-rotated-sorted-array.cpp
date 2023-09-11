class Solution {
public:
    int findMin(vector<int>& nums)
    {
        int n=nums.size();
        int l=0;
        int h=n-1;
        int mid;
        int ans=INT_MAX;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if(nums[l]<=nums[mid])
            {
                ans=min(ans,nums[l]);
                l=mid+1;
            }
            else
            {
               
                h=mid-1;
                 ans=min(ans,nums[mid]);
            }    
        }
        return ans; 
    }
};