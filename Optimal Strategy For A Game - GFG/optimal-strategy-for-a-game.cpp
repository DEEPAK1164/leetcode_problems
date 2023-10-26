//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to find the maximum possible amount of money we can win.

class Solution {
public:
    long long f(int arr[], int i, int j, vector<vector<int>>& dp) {
        if (j == i + 1)
            return max(arr[i], arr[j]);

        if (dp[i][j] != -1)
            return dp[i][j];


 return dp[i][j] =max(arr[i]+min(f(arr,i+2,j,dp),f(arr,i+1,j-1,dp)), arr[j]+min(f(arr,i,j-2,dp),f(arr,i+1,j-1,dp)));
    }
    long long maximumAmount(int arr[], int n) {
        vector<vector<int>> dp(n, vector<int>(n, -1));

        int i = 0, j = n - 1;
        int sm = 0;
        for (int i = 0; i < n; i++) {
            sm += arr[i];
        }

        return f(arr, 0, n - 1,  dp);
    }
};

//{ Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends