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
    int minFlips(int a, int b, int c) {
        int ct=0;
        for(int i=31;i>=0;i--)
        {
            if(checkKthBit(c, i))
            {
                if(checkKthBit(a, i)==false&&checkKthBit(b, i)==false)
                    ct++;
            }
            else
            {
                 if(checkKthBit(a, i)==true&&checkKthBit(b, i)==true)
                     ct+=2;
                else if(checkKthBit(a, i)==true||checkKthBit(b, i)==true)
                    ct++;
            }
        }
        return ct;
    }
};