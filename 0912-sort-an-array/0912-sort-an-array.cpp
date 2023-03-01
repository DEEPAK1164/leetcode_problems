class Solution {
public:
    vector<int> sortArray(vector<int>& nums)
    {
        
        vector<int>ans;
        sort(nums.begin(),nums.end());
        ans=nums;
        return ans;
        
        
        
    
    }
};