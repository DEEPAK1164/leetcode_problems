class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second>nums.size()/2)
            {
                ans=it.first;
                break;
            }
        }
        return ans;
    }
};