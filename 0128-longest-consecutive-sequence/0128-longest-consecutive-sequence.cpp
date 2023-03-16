class Solution {
public:
    int longestConsecutive(vector<int>& arr)
    {
        int n=arr.size();
        unordered_set<int> s;
    int res = 0;
 
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
 
    for (int i = 0; i < n; i++) {
        if (s.find(arr[i] - 1) == s.end()) {
            int curr = 1;
            while (s.find(curr+arr[i]) != s.end())
                curr++;
                
            res = max(res, curr);
        }
    }
    return res;
        
        
        
        
    }
};