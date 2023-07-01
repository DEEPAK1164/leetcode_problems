class Solution {
public:
    void rec(vector<int>&candidates,int ind,int target,vector<vector<int>>&ans,vector<int>&ds)
    {
        if(ind==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
                return;
            }
            else
            {
                return;
            }
        }
        
        if(candidates[ind]<=target)
        {
            ds.push_back(candidates[ind]);
            rec(candidates,ind,target-candidates[ind],ans,ds);
            ds.pop_back();
        }
        rec(candidates,ind+1,target,ans,ds);
        
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        rec(candidates,0,target,ans,ds);
        return ans;
    }
};