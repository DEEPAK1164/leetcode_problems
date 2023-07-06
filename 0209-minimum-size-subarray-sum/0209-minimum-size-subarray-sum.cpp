class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mn=INT_MAX;
        int l=0,r=0;
        int s=0;
        for(int i=0;i<nums.size();i++)
        {   
            s+=nums[i];
        }
        if(s<target)
            return 0;
        
        int sm=nums[0];;
        while(r<nums.size())
        {
          
            if(sm<target)
            {
                if(r==nums.size()-1)
                {
                    break;
                }
                r++;
                sm+=nums[r];
            }
            else
            {
                mn=min(mn,r-l+1);
                sm-=nums[l];
                l++;
            }
        }
        return mn;
    }
};