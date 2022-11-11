class Solution {
public:
    // int ncr(int n,int r)
    // {
    //     if(r==0||n==r)
    //         return 1;
    //     return ncr(n-1,r-1)+ncr(n-1,r);
    // }
    long ncr(int n, int r) {
        long ans = 1;
        for(int i = 0; i < r; i++) {
            ans *= n-i;
            ans /= i+1;
        }
        return ans;   
    }
    int numTrees(int n) {
    
      return ncr(2*n,n)/(n+1);
    }
    
};