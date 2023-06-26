class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int x,y;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            if(mp.find(target-nums[i])!=mp.end()&&mp[target-nums[i]]!=i)
            {
                x=i;
                y=mp[target-nums[i]];
                break;
            }
        }
        return {x,y};
    }
};