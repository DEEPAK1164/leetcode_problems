/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let mx = Number.MIN_SAFE_INTEGER;
     let sm = 0;
    let n=nums.length;
    for(let i=0;i<n;i++)
        {
            sm+=nums[i];
            mx=Math.max(sm,mx);
            if(sm<0)
                {
                    sm=0;
                }
        }
    return mx;
};