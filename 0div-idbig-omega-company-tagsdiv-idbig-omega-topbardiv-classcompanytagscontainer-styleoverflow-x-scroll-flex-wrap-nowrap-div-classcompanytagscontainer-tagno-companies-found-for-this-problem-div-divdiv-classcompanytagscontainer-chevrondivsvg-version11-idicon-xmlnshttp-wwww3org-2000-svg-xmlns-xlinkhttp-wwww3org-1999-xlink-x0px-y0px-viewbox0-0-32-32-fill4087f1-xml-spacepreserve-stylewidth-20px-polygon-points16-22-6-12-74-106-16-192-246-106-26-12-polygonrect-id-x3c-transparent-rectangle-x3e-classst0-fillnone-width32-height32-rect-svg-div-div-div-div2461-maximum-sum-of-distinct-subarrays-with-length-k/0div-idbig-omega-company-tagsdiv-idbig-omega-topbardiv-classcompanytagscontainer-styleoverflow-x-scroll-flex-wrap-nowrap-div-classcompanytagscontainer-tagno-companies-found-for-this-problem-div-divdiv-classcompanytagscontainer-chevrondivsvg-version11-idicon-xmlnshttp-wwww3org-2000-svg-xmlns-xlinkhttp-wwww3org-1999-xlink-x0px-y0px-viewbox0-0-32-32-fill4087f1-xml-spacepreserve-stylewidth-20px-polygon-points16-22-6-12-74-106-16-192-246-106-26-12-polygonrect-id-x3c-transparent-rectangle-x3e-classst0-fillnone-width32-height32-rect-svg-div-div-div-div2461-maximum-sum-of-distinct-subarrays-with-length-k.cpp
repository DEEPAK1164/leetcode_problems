class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        set<int>st;
        int n=nums.size();
        long long mx=0;
        long long sm=0;
        int i=0;
        for(int j=0;j<n;j++)
        {
          
            while(st.find(nums[j])!=st.end())
            {
              //shrink the window until repeated element not found
                 st.erase(nums[i]);
               sm-=nums[i];
                i++;
               
            }

            sm+=nums[j];
        if(j-i+1==k)
        {
            mx=max(sm,mx);
            sm-=nums[i];
            st.erase(nums[i]);
            i++;//update the answer and shrink the window and undo changes at that index
        }
          st.insert(nums[j]);
    }
        return mx;
    }
};