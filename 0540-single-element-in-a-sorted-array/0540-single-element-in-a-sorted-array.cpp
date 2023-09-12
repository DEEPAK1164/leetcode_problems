class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
      
        int l=1,h=nums.size()-2,mid;
          if(n==1)
            return nums[0];
        if(nums[0]!=nums[1])
            return nums[0];
        if(nums[n-1]!=nums[n-2])
        return nums[n-1];
        while(l<=h)
        {
            mid=(l+h)>>1;
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