//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int>mp;
        int pf=0;
        int mx=0;
        for(int i=0;i<n;i++)
        {
           pf+=A[i];
           if(pf==0)
           {
               mx=i+1;
           }
           if(mp.find(pf)==mp.end())
           {
               mp[pf]=i;
           }
           else
           {
               mx=max(mx,i-mp[pf]);
           }
        }
        // Your code here
        return mx;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends