class Solution {
public:
    bool ispossible(vector<int>& nums,int md, int threshold)
    {
        int sm=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%md==0)
            sm+=nums[i]/md;
            else
             sm+=nums[i]/md+1;
        }
        if(sm<=threshold)
            return true;
        return false;  
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int h=*max_element(nums.begin(),nums.end());
        int mid;
        while(l<=h)
              {
                  mid=l+(h-l)/2;
            if(ispossible(nums,mid,threshold))
               {
                   h=mid-1;
               }
            else
               {
                   l=mid+1;
               }
            
            
           }
        
        return l;
    }
};