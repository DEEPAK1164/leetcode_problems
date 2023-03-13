//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
         vector<pair<int,int>>v;
        int n=A.size();
        for(int i=0;i<n;i++)
        {
            v.push_back({A[i],B[i]});
        }
        
    
        long long sq=0;
        long long ct=0;
        for(int i=n-1;i>=0;i--)
        {
            int x=v[i].second;
            if(x%2==1)
            {
            x--;
            }
            sq+=v[i].first*x;
            ct+=x;
        }
        if(ct%4==0)
        return sq;
        else
        {
           int mn=INT_MAX;
           for(int i=0;i<n;i++)
           {
               if(v[i].second>=2)
               {
                   mn=min(v[i].first,mn);
               }
           }
           sq-=2*mn;
           return sq;
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N), B(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        for(int i=0;i<N;i++){
          cin>>B[i];
        }
        Solution obj;
        auto ans = obj.maxPossibleValue(N,A,B);
        cout<<ans<<endl;
    }
} 
// } Driver Code Ends