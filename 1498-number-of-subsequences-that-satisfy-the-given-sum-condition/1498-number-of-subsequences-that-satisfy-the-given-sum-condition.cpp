class Solution {
public:
    int numSubseq(vector<int>& nums, int target) 
    {
        int count=0;
        int mod=1e9+7;
        int n=nums.size();
        vector<int>pow(n,1);
        for(int i=1;i<n;i++)
        {
            pow[i]=(2*pow[i-1])%mod;;
        }
        sort(nums.begin(),nums.end());
        int l=0,r=n-1;
        while(l<=r)
        {
            if(nums[l]+nums[r]>target)
                r--;
            else
            {
                count=(count+pow[r-l])%mod;
                l++;
            }
        }
        return count;
    }
};