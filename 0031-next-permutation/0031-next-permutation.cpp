class Solution {
public:
    void next(vector<int>& arr)
{
    next_permutation(arr.begin(),arr.end());
}
 
    void nextPermutation(vector<int>& nums) {
        next(nums);
        
    }
};