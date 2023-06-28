class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int mx=1;
        int n=nums.size();
        if(n==0)
            return 0;
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        vector<int>v(st.begin(),st.end());
        for(int i=0;i<v.size();i++)
        {
            int ct=1;
            int x=v[i];
            if(st.find(x-1)==st.end())
            {
                while(st.find(x+1)!=st.end())
                {
                    x=x+1;
                    ct=ct+1;
                }
                 mx=max(mx,ct);
            }   
        } 
        return mx;   
    }
};