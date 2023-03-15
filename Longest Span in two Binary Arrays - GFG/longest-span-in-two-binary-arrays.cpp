//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int longestCommonSum(bool arr1[], bool arr2[], int n) {
            // code here 
            int arr[n];
            for(int i=0;i<n;i++)
            {
                arr[i]=arr1[i]-arr2[i];
            }
             int prefix_sum = 0, res = 0, sum=0;
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
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        bool arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.longestCommonSum(arr1, arr2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends