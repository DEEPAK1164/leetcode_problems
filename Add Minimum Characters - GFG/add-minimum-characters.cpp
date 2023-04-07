//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int addMinChar(string str){    
        //code here
         int n=str.length();
        int i=0;
        int j=0;
        string rev=str;
        reverse(rev.begin(),rev.end());
        vector<int> lps(n+1,0);
        while(i<n && j<n){
            if(str[i]==rev[j]){
                i++;
                j++;
                lps[j]=i;
            }
            else{
               if(i!=0){
                   i=lps[i-1];
               }else{
                   lps[j]=0;
                   j++;
               }
                
            }
        }
     
        return n-lps[n];
        
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends