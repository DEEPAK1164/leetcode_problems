class Solution {
public:
    int findMaxLength(vector<int>& arr) {
       int prefix_sum = 0, res = 0;
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
                arr[i]=-1;
        }
    unordered_map<int, int> m;
    for(int i = 0; i < arr.size(); i++)
    {
        prefix_sum += arr[i];
        if(prefix_sum == sum)
             res = i + 1; 
        if(m.find(prefix_sum) == m.end())
            m.insert({prefix_sum, i}); 
        if(m.find(prefix_sum - sum) != m.end())
        res = max(res, i-m[prefix_sum-sum]);
    }
        return res;
               
    }
};