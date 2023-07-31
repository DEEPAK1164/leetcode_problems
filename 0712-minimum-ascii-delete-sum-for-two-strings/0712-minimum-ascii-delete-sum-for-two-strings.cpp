#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();

        // Initialize DP array with -1 to indicate that the subproblems are not yet solved.
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));

        // Call helper function with DP.
        return computeCost(s1, s2, m, n, dp);
    }

private:
    // Return minimum cost to make s1[0...i-1] and s2[0...j-1] equal
    int computeCost(const string& s1, const string& s2, int i, int j, vector<vector<int>>& dp) {
        if (i == 0) {
            // If s1 is empty, then we need to delete all characters of s2.
            int deleteCost = 0;
            for (int pointer = 0; pointer < j; pointer++) {
                deleteCost += s2[pointer];
            }
            return deleteCost;
        }

        if (j == 0) {
            // If s2 is empty, then we need to delete all characters of s1.
            int deleteCost = 0;
            for (int pointer = 0; pointer < i; pointer++) {
                deleteCost += s1[pointer];
            }
            return deleteCost;
        }

        if (dp[i][j] != -1) {
            // If the subproblem is already solved, return the stored value.
            return dp[i][j];
        }

        if (s1[i - 1] == s2[j - 1]) {
            // If the characters are equal, no deletion is needed, move to the previous indices.
            dp[i][j] = computeCost(s1, s2, i - 1, j - 1, dp);
        } else {
            // If the characters are different, choose the minimum cost of two options:
            dp[i][j] = min(
                s1[i - 1] + computeCost(s1, s2, i - 1, j, dp),    // Delete s1[i-1] and move to previous i.
                s2[j - 1] + computeCost(s1, s2, i, j - 1, dp)     // Delete s2[j-1] and move to previous j.
            );
        }

        return dp[i][j];
    }
};
