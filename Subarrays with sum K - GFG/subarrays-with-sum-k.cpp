//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
     map<int, int> mp; // {prefix sum, frequency}
        int sum = 0;
        int count = 0;
        
        for (int i = 0; i < N; i++) {
            sum += Arr[i];
            
            // If the current prefix sum is equal to k, increment count
            if (sum == k) {
                count++;
            }
            
            // If there is a prefix sum equal to (sum - k), add its frequency to count
            if (mp.find(sum - k) != mp.end()) {
                count += mp[sum - k];
            }
            
            // Increment the frequency of the current prefix sum
            mp[sum]++;
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends