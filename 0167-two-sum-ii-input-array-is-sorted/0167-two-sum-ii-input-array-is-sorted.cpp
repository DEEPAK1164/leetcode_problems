class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         int x,y;
     unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                x=i+1;
                y=mp[target-nums[i]]+1;
                break;
            }
            mp[nums[i]]=i;
        }
        
        if(x<y)
            return {x,y};
        return {y,x};
    }
};