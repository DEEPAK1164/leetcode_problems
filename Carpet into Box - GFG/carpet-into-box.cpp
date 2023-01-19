//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
          //code here
        int a =0;
        int b = 0;
        int c= 0;
        int d = 0;
        while(A>C || A>D){
            if(A>C){
                a++;
            }
            if(A>D){
                b++;
            }
            A=A/2;
        }
        while(B>C||B>D){
            if(B>C){
                c++;
            }
            if(B>D){
                d++;
            }
            B=B/2;
        }
        return min(a+d,b+c);
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends