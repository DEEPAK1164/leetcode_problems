class Solution {
public:
    void generate(vector<int>&subset,int i,vector<int>&nums,vector<vector<int>>&all)
    {
        if(i==nums.size())
        {
            all.push_back(subset);
            return;
        }
        generate(subset,i+1,nums,all);
        subset.push_back(nums[i]);
         generate(subset,i+1,nums,all);
        subset.pop_back();
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>empty;
        generate(empty,0,nums,v);
        return v;
    }
};