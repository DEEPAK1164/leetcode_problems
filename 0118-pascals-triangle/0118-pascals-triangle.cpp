class Solution {
public:
    void printRth(int r,vector<int>&v)
    {
        int ans=1;
        v.push_back(ans);
        for(int i=1;i<r;i++)
        {
            ans=ans*(r-i);
            ans=ans/i;
            v.push_back(ans);
        }
    }
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>>vv;
        int n=numRows;
        for(int i=1;i<=n;i++)
        {
            vector<int>s;
            printRth(i,s);
            vv.push_back(s);
            
        }
       return vv; 
    }
};