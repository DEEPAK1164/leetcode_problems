class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,n=chars.size();
        int newlen=0;
        while(i<n)
        {
            int j=i;
            while(j<n&&chars[j]==chars[i])
            {
                j++;
            }
            chars[newlen++]=chars[i];
            if(j-i>1)
            {
                for(char c:to_string(j-i))
                {
                    chars[newlen++]=c;
                }
            }
            i=j;
        }
        return newlen;
    }
};