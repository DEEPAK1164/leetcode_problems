class Solution {
public:
     bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        while(n>0) {
            if(k==0) {
                if(n%2==1) return true;
                else return false;
            }
            n = n>>1;
            k--;
        }
      return false;
    }
    int minBitFlips(int start, int goal) {
        int ct=0;
        for(int i=31;i>=0;i--)
        {
            if(checkKthBit(start, i)!=checkKthBit(goal, i))
                ct++;
        }
        return ct;
    }
};