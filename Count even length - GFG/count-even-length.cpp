//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define mod 1000000007
class Solution{
	public:
	unsigned long long power(unsigned long long x,  

                                 unsigned long long  y, unsigned long long p) 
{ 
    unsigned long long res = 1; // Initialize result 
    x = x % p; // Update x if it is more than or 
    // equal to p 
    while (y > 0)  
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res * x) % p; 
        // y must be even now 
        y = y >> 1; // y = y/2 
        x = (x * x) % p; 
    } 

    return res; 
} 
// Returns n^(-1) mod p 
unsigned long long modInverse(unsigned long long n, unsigned long long p) 
{ 

    return power(n, p - 2, p); 
} 
// Returns nCr % p using Fermat's little 
// theorem. 
unsigned long long nCrModPFermat(unsigned long long n, unsigned long long r, unsigned long long p) 
{ 
    // If n<r, then nCr should return 0 
    if (n < r) 
        return 0; 
    // Base case 
    if (r == 0) 
        return 1; 
    // Fill factorial array so that we 
    // can find all factorial of r, n 
    // and n-r 
    unsigned long long fac[n + 1]; 
    fac[0] = 1; 
    for (int i = 1; i <= n; i++) 
        fac[i] = (fac[i - 1] * i) % p; 
    return (fac[n] * modInverse(fac[r], p) % p 
            * modInverse(fac[n - r], p) % p) 
           % p; 
} 
	unsigned long long compute_value(unsigned long long n)
	{
	    // Code here
	    unsigned long long res= nCrModPFermat(2*n,n, mod) ;
                                 return res%mod;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.compute_value(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends