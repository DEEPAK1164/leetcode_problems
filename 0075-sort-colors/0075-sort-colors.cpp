class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                swap(nums[j++],nums[i]);
            } 
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                swap(nums[j++],nums[i]);
            } 
        }
       
    }
};