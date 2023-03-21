class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long res=0;
long long temp=0;
        for(long long i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                temp++;
                res+=temp;
            }
            else
            {
                temp=0;
            }
        }
        return res;
    }
};