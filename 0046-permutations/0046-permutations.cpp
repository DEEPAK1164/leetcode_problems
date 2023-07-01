class Solution {
public:
    void fn(vector<int>&arr,vector<int>vis,vector<vector<int>>&ans,vector<int>&per)
    {
        if(per.size()==arr.size())
        {
            ans.push_back(per);
            return;
        }
        for(int i=0;i<arr.size();i++)
        {
            if(vis[i]==0)
            {
             
                per.push_back(arr[i]);
                vis[i]=1;
                fn(arr,vis,ans,per);
                vis[i]=0;
                per.pop_back();

            }
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<int>per;
        vector<int>vis(nums.size(),0);
        int n=nums.size();
        vector<vector<int>>ans;
        fn(nums,vis,ans,per);
        return ans;
        
        
        
    }
};