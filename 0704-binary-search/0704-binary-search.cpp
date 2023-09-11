class Solution {
public:
    int bs(vector<int>& nums, int l, int h, int target) {
        if (l > h)
            return -1;
        int mid = l + (h - l) / 2;
        if (nums[mid] == target)
            return mid;
        if (nums[mid] > target)
            return bs(nums, l, mid - 1, target);
        if (nums[mid] < target)
            return bs(nums, mid + 1, h, target);
       return -1; // Return -1 if target is not found
    }

    int search(vector<int>& nums, int target) {
        int h = nums.size() - 1;
        return bs(nums, 0, h, target);
    }
};
