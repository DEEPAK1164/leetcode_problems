class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        while(binary_search(nums.begin(),nums.end(),i))
        {
            i++;
        }
        return i;
    }
};