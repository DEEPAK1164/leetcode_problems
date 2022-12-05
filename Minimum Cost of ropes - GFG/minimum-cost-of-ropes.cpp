//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        long long x=0;
        long long y=0;
           priority_queue <long long, vector<long long>, greater<long long> > pq;
        for(int i=0;i<n;i++)
        {
            pq.push(arr[i]);
        }
        vector<long long>v;
        while(pq.size()!=1)
        {
             x=pq.top();
            pq.pop();
            // if(pq.empty())
            // {
            //     break;
            // }
             y=pq.top();
            pq.pop();
            v.push_back(x+y);
            pq.push(x+y);
        }
        long long sm=0;
        for(int i=0;i<v.size();i++)
        {
            sm+=v[i];
        }
        return sm;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends