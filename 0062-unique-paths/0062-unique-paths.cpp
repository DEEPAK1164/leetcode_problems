class Solution {
public:
    int ncr(int n,int r)
    {
        
        double res=1;
      for (int i = 1; i <= r; i++) {
        res = res * (n-r +i);
        res = res / (i );
    }
    return (int)res;
        
    }
    int uniquePaths(int m, int n)
    {
        if(n==1||m==1)
            return 1;
        return ncr((m+n-2),(m-1));
    }
};