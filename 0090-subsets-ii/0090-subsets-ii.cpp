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
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<int>empty;  
        vector<vector<int>>allSubsets;
        generate(empty,0,nums,allSubsets);
        set<vector<int>>st;
        for(int i=0;i<allSubsets.size();i++)
        {
            sort(allSubsets[i].begin(),allSubsets[i].end());
            st.insert(allSubsets[i]);
        }
           vector<vector<int>>all(st.begin(),st.end());
        
        return all;
    }
};