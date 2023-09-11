class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v;
        int lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int ub=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        
        if(lb==n || nums[lb]!=target)
        {
            v.push_back(-1);
             v.push_back(-1);
        }
        else
        {
            v.push_back(lb);
             v.push_back(ub);
        }
        
        return v;
    }
};