class Solution {
    private:
    void approach(int ind,int target,vector<int>&ds,vector<vector<int>>&ans,vector<int>&candidates)
    {
        if(ind ==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
            
        }
        //pickup the element
        if(candidates[ind]<=target)
        {
            ds.push_back(candidates[ind]);
            approach(ind,target-candidates[ind],ds,ans,candidates);
            ds.pop_back();
        }
        //non pick the element
          approach(ind+1,target,ds,ans,candidates);
        
        
        
        
        
    }
public:
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>>ans;
        vector<int>ds;
        approach(0,target,ds,ans,candidates);
        return ans;
        
    }
};