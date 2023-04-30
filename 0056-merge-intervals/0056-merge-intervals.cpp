class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        int n=intervals.size();
        for(int i=0;i<n;i++)
        {
            int f=intervals[i][0];
            int s=intervals[i][1];
            if(!ans.empty()&&f<=ans.back()[1]){
                continue;
            }
            for(int j=i+1;j<n;j++)
            {
                if(intervals[j][0]<=s)
                {
                    s=max(s,intervals[j][1]);
                }
                else
                {
                    break;
                }
            }
            ans.push_back({f,s});
        }
      

        return ans;
    }
};