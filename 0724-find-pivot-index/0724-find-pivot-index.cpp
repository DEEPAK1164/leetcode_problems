class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int pf[n];
        int sf[n];
        pf[0]=nums[0];
        sf[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            pf[i]=pf[i-1]+nums[i];
        }
        for(int j=n-2;j>=0;j--)
        {
            sf[j]=sf[j+1]+nums[j];
        }
        for(int i=0;i<n;i++)
        {
            if(pf[i]==sf[i])
                return i;
        }
        return -1;
        
    }
};