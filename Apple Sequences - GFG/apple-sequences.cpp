//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        // code here 
         int c=0 , ans = INT_MIN, i= 0 ,j=0 ;
    while(j<n)
    {
        if(arr[j]=='A')
        {
            ans = max(ans , j-i+1) ;
        }

       if(arr[j]=='O')
        {
            if(c<m)
            {
            c++;
            ans = max(ans , j-i+1) ;
            }
            else if(c==m)
            {
                ans = max(ans , j-i) ;
                while(arr[i]!='O')
                i++; 
                i++; 
                c-- ; 
                j--;
            }
        }
        j++; 
    }
      return ans ;   
        
        
        
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends