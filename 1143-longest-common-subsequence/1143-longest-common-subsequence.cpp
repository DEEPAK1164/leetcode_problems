class Solution {
public:
    int rec(const string& s1, int id1, const string& s2, int id2, vector<vector<int>>& dp) {
        if (id1 < 0 || id2 < 0)
            return 0;
        
        if (dp[id1][id2] != -1)
            return dp[id1][id2];
        
        if (s1[id1] == s2[id2])
            return dp[id1][id2] = 1 + rec(s1, id1 - 1, s2, id2 - 1, dp);
        
        return dp[id1][id2] = max(rec(s1, id1 - 1, s2, id2, dp), rec(s1, id1, s2, id2 - 1, dp));
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        int ans = rec(text1, n - 1, text2, m - 1, dp);
        return ans;
    }
};
