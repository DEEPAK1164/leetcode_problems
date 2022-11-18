class Solution {
public:
    int nthUglyNumber(int n) {
            vector<int>dp(n+1,0);
    int p2 = 1, p3 = 1, p5 = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
      int mn = min(2 * dp[p2], min(3 * dp[p3], 5 * dp[p5]));
      dp[i] = mn;
      if (mn == 2 * dp[p2]) {
        p2++;
      }
      if (mn == 3 * dp[p3]) {
        p3++;
      }
      if (mn ==  5 * dp[p5]) {
        p5++;
      }
    }
    return dp[n];
    }
};