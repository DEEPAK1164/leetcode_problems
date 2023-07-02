class Solution {
public:
    bool isp(string s,int l,int r)
    {
        while(l<=r)
        {
            if(s[l++]!=s[r--])
            {
                return false;
            }
        }
        return true;
        
    }
    void rec(int ind,string s,vector<string>&ds,vector<vector<string>>&ans)
    {
         if(ind==s.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<s.size();++i)
        {
            if(isp(s,ind,i))
            {
                ds.push_back(s.substr(ind,i-ind+1));
                rec(i+1,s,ds,ans);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) 
    {
       vector<vector<string>>ans;
        vector<string>ds;
        rec(0,s,ds,ans);
        return ans;
    }
};