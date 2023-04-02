class Solution 
{
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals)
    {
        int mx=0;
        int sm=0;
        int j=0;
        unordered_map<char,int>mp;
        for(int i=0;i<chars.size();i++)
        {
            mp[chars[i]]=vals[i];
        }
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
               sm+=mp[s[i]]; 
            }
            else
            {
            sm+=s[i]-'a'+1;
            }
            if(sm>=0)
            {
                mx=max(sm,mx);
            }
            else
            {
                sm=0;
            }
        }
        
        return mx;
    }
};