class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int res=0;
       unordered_set<int>st(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(st.find(nums[i]-1)==st.end())
            {
                int c=1;
                while(st.find(c+nums[i])!=st.end())
                {
                    c++;
                }
                res=max(res,c);
            }   
        }
        return res;
       
    }
};