class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        int l=n/2;
        int ct1=0;
        int ct2=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                ct1++;
        }
         for(int i=l;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                ct2++;
        }
        if(ct1==ct2)
            return true;
        return false;
        
        
        
        
    }
};