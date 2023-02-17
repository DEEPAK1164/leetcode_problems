//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        // code here
        long long n=GeekNum.size();
  long long sm=0;
         long long j=n-1;
       long long i=j-K+1;
        for(  long long p=i;p<=j;p++)
        {
            sm+=GeekNum[p];
        }
        //return sm;
         long long x=N-K;
        for(  long long p=0;p<x;p++)
        {
             GeekNum.push_back(sm);
            sm-=GeekNum[i++];
    
            sm+=GeekNum[++j];
        
           
        }
        
        return GeekNum[N-1];
        
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends