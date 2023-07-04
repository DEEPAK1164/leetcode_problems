class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0,h=nums.size()-2,mid;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if(mid%2==1)
            {
                if(nums[mid-1]!=nums[mid])
                {
                    h=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            else
            {
                if(nums[mid]!=nums[mid+1])
                {
                    h=mid-1;
                }
                else
                {
                    l=mid+1;
                }
                
                
            } 
        }
        return nums[l];
    }
};