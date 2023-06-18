/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */

var sortColors = function(nums)
{
    let n=nums.length;
    let l=0,mid=0,h=n-1;
    while(mid<=h)
        {
            if(nums[mid]==0)
                {
                    [nums[l],nums[mid]]=[nums[mid],nums[l]];
                    l++;
                    mid++;
                }
            else if(nums[mid]==1)
                {
                    mid++;
                }
            else
                {
                    [nums[mid],nums[h]]=[nums[h],nums[mid]];
                    h--;
                }
        }
};