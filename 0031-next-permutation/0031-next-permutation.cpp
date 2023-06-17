class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int id=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                id=i;
                break;
            }
        }
        if(id==-1)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
        for(int i=n-1;i>id;i--)
        {
            if(nums[i]>nums[id])
            {
                swap(nums[i],nums[id]);
                break;
            }
        }
        int i=id+1;
        int j=n-1;
        while(i<j)
        {
            swap(nums[i++],nums[j--]);
        }
        }
        
    }
};