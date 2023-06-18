class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=0;
        int mn=prices[0];
        int p=0;
        int n=prices.size();
        for(int i=1;i<n;i++)
        {
            mx=max(mx,prices[i]-mn);
            mn=min(prices[i],mn);
        }
        return mx;
    }
};