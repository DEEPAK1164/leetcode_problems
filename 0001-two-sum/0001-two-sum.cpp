class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>v;
        
        for(int i=0;i<nums.size();i++)
        {
          if(mp.find(target-nums[i])!=mp.end())
            {
                int ind=mp[target-nums[i]];
                v.push_back(ind);
                v.push_back(i);
                break;
            }
              mp[nums[i]]=i;
        }
        
        
        return v; 
    }
};