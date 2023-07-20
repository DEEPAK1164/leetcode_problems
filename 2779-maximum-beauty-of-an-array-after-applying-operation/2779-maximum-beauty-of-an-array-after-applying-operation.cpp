class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
              int n = nums.size();

        // Step 1: Sort the input vector
        sort(nums.begin(), nums.end());

        // Step 2: Add k to each element in the sorted vector
        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] + k;
        }

        // Step 3: Initialize the prefix sum array
        int mx = nums[n - 1];
        vector<int> prefix(mx + k + 2 , 0);

        // Step 4: Calculate the prefix sum array
        for (int i = 0; i < n; i++) {
            int s = nums[i] - k;
            int e = nums[i] + k;
            prefix[s]++;
            prefix[e + 1]--;
        }

        // Step 5: Calculate the prefix sum
        for (int i = 1; i < prefix.size(); i++) {
            prefix[i] += prefix[i - 1];
        }

        // Step 6: Find the maximum beauty value
        int mxx = 0;
        for (int i = 0; i < prefix.size(); i++) {
            mxx = max(mxx, prefix[i]);
        }

        return mxx;
  
    }
};