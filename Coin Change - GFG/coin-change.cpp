//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  long long f(int coins[], int ind, int sum,vector<vector<long long>>&dp)
  {
      if(sum==0)
      return 1;
      if(ind<0)
      return 0;
      if(sum<0)
      return 0;
      if(dp[ind][sum]!=-1)
      return dp[ind][sum];
      
      long long p=f(coins,ind,sum-coins[ind],dp);
      long long np=f(coins,ind-1,sum,dp);
      return dp[ind][sum]= p+np;
  }
    long long int count(int coins[], int N, int sum) {
        vector<vector<long long>>dp(N+1,vector<long long>(sum+1,-1));
      return f(coins,N-1,sum,dp); 
        // code here.
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends