class Solution {
public:
   long long dp[100005];
    long long func(int idx, vector<vector<int>>& questions){
        int n= questions.size();
        if(idx> n-1) return 0;

        if(dp[idx]!=-1)  return dp[idx];

        long long ans= INT_MIN;

        // way 1 
ans= max(ans, questions[idx][0]+ func(idx + questions[idx][1]+1, questions));

       // way 2
ans= max(ans, func(idx+1, questions));  

    return dp[idx]= ans;
    }

    long long mostPoints(vector<vector<int>> &questions) 
    {
       memset(dp, -1, sizeof(dp));

        long long res= func(0, questions);
return res;
        
    }
};