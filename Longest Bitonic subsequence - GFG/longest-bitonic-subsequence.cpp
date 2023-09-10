//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		void lis(vector<int>&arr,vector<int>&dp)
	{
        for(int i=0;i<dp.size();i++)
        {
          
            int mx=0;
            for(int j=0;j<i;j++)
            {
                if(arr[i]>arr[j])
                {
                   mx=max(dp[j],mx);
                }
               
            }
             dp[i]=mx+1;
        }
	    // code here
	}
	int LongestBitonicSequence(vector<int>nums)
	{
	    vector<int>v;
	    for(int i=0;i<nums.size();i++)
	    {
	        v.push_back(nums[i]);
	    }
	    reverse(v.begin(),v.end());
	    int n=nums.size();
	    vector<int>dp1(n,0);
	    vector<int>dp2(n,0);
	    lis(nums,dp1);
	    lis(v,dp2);
	    reverse(dp2.begin(),dp2.end());
	    int mx=INT_MIN;
	    for(int i=0;i<dp1.size();i++)
	    {
	        mx=max(dp1[i]+dp2[i]-1,mx);
	    }
	    return mx;
	    
	    // code here
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends