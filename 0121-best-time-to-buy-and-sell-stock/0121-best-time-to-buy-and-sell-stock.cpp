class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=INT_MAX;
        int n=prices.size();
        int p=0;
        for(int i=0;i<n;i++)
        {
            mn=min(mn,prices[i]);
            p=max(p,prices[i]-mn);
        }
        return p;
    }
};