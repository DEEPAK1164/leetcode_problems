class Solution {
public:
    int findValidSplit(vector<int>& nums)
    {
        int n = nums.size();
        if (nums[0] % nums[n - 1] == 0 ||
            nums[n - 1] % nums[0] == 0)
            return -1;
        
        vector<int> far(n, -1);
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[j] % nums[i] == 0 ||
                    nums[i] % nums[j] == 0) {
                    far[i] = j;
                }
            }
        }
        
        int farest = -1;
        for (int i = 0; i < n - 1; ++i) {
            farest = std::max(farest, far[i]);
            if (farest <= i)
                return i;
        }
        
        return -1;
        
    }
};