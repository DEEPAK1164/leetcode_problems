class Solution {
public:
    int dp[502][502];
    int rec(vector<int>& nums1,int i, vector<int>& nums2,int j)
    {
        int ct=0;
        if(i==nums1.size()||j==nums2.size())
        {
            return 0;
        }
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(nums1[i]==nums2[j])
            ct+= 1+rec(nums1,i+1,nums2,j+1);
        else
            ct+= max(rec(nums1,i,nums2,j+1),rec(nums1,i+1,nums2,j));
        
        return dp[i][j]=ct;
        
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        memset(dp, -1, sizeof(dp));
         int ans=rec(nums1,0,nums2,0);
        return ans;
    }
};