class Solution {
public:
    int mySqrt(int x) {
        long long l=1;
        long long h=x;
    long long ans=0;
    long long mid;
        if(x==0)
            return 0;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(mid*mid<=x)
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        return ans;
    }
};