//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int sum) 
    { 
        // Complete the function
        int prefix_sum = 0, res = 0;
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        if(prefix_sum == sum)
             res = i + 1; 
        if(m.find(prefix_sum) == m.end())
            m.insert({prefix_sum, i}); 
        if(m.find(prefix_sum - sum) != m.end())
        res = max(res, i-m[prefix_sum-sum]);
        }
        return res;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends