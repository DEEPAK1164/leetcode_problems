class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        int wsz=abs(n-m);

        for(int ws=0;ws<=wsz;ws++)
        {
            for(int i=0;i<m;i++)
            {
                if(needle[i]!=haystack[ws+i])
                {
                    break;
                }
                if(i==m-1)
                {
                return ws;
                }
            }  
        }
  return -1;
    }
};