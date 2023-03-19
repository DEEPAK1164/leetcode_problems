class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            vector<bool>vis(256,false);
            for(int j=i;j<n;j++)
            {
                if(vis[s[j]])
                {
                    break;
                }
                else
                {
                    res=max(res,j-i+1);
                    vis[s[j]]=true;
                    
                }
                
            }
        }
        
        return res;
    }
};