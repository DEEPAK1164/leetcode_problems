class Solution {
public:
    void rev(vector<int>&v,int i,int j)
    {
        while(i<j)
        {
            swap(v[i++],v[j--]);
        }
    }
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int ind=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                ind=i;
                break;
            }
        }
        if(ind==-1)
        {
            rev(nums,0,n-1);
        }
        else
        {
            for(int i=n-1;i>ind;i--)
            {
                if(nums[i]>nums[ind])
                {
                    swap(nums[i],nums[ind]);
                    break;
                }
            }
            rev(nums,ind+1,n-1);
            
            
            
        }
        
    }
};