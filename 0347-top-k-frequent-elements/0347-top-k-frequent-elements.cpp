class Solution {
public:
    vector<int>topKFrequent(vector<int>& nums, int k)
    {
         vector<int>ans;
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
             mp[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto it:mp)
        {
            pq.push(make_pair(it.second,it.first));
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};