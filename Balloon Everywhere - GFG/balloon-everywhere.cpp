//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
int v[26]={0};
    int maxInstance(string s)
    {
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
           v[ch-'a']++;
        }
        return min(min(v[0],v[1]),min(min(v[11]/2,v[13]),v[14]/2));
      //  0-a,1-b,11-l,14-o,13-n
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends