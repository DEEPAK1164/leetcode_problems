class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans=1;
        int n=rowIndex+1;
        vector<int>v;
        v.push_back(ans);
        for(int i=1;i<n;i++)
        {
            ans=ans*(n-i);
            ans=ans/i;
            v.push_back(ans);
        }
        return v;
    }
};