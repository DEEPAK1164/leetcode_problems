class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool one=false;
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                one=true;
            }
            if(nums[i]<1||nums[i]>n)
            {
                nums[i]=1;
                
            }
        }
        if(one==false)
        {
            return 1;
        }
        
        for(int i=0;i<n;i++)
        {
            int x=abs(nums[i]);
          
            nums[x-1]=-1*abs(nums[x-1]);
                    }
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                return i+1;
            }
        }
        
        
        return n+1;
        
        
    }
};