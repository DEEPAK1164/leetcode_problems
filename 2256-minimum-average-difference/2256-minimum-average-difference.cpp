class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
          int n= nums.size();
          long long pre[n+1];
          pre[0]= 0;
          vector<pair<int, int>>v;

        for(int i=0;i<nums.size();++i)
            pre[i+1]= pre[i]+nums[i];

        for(int i=0;i<n;++i) {
        int z=   abs(pre[i+1]/(i+1) - (pre[n]-pre[i+1])/max(1,n-i-1));
           v.push_back({z, i}); } 

           sort(v.begin(), v.end());
           int x= v[0].second;

           return x;
        
    }
};