class Solution {
public:
   int rec(string &s1,int id1,string &s2, int id2,vector<vector<int>>&dp)
    {
        if(id1<0||id2<0)
            return 0;
        if(dp[id1][id2]!=-1)
            return dp[id1][id2];
        if(s1[id1]==s2[id2])
            return dp[id1][id2]= 1+rec(s1,id1-1,s2,id2-1,dp);
        return dp[id1][id2]=0+max(rec(s1,id1-1,s2,id2,dp),rec(s1,id1,s2,id2-1,dp));
    
    }
    int longestPalindromeSubseq(string s) 
    {
        string s1=s;
        int i=0;
        int j=s1.size()-1;
        while(i<j)
        {
            swap(s1[i++],s1[j--]);
        }
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int ans=rec(s,n-1,s1,n-1,dp);
        return ans;  
    }
};