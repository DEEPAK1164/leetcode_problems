class Solution {
public:
int mx(int ind,vector<int>&arr,vector<int>&dp)
{
if(ind==0)
return dp[ind]= arr[ind];
if(ind<0)
return 0;
if(dp[ind]!=-1)
{
    return dp[ind];
}
int pick=arr[ind]+mx(ind-2,arr,dp);
int notpick=0+mx(ind-1,arr,dp);
return dp[ind]=max(pick,notpick);
}
 int rob(vector<int>& nums) {
    if(nums.size()==1)
    {
        return nums[0];
    }
    vector<int>dp1(nums.size()+1,-1);
       vector<int>dp2(nums.size()+1,-1);
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<=nums.size()-2;i++)
        {
            v1.push_back(nums[i]);
        }
        for(int i=1;i<=nums.size()-1;i++)
        {
            v2.push_back(nums[i]);
        }
int res1=mx(v1.size()-1,v1,dp1);
int res2=mx(v2.size()-1,v2,dp2);
return max(res1,res2);
    }
};