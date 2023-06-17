/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var nextPermutation = function(nums)
{
     let n=nums.length;
    let id=-1;
    for(let i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
                {
                    id=i;
                    break;
                }
        }
    
    for(let i=n-1;i>id;i--)
        {
            if(nums[i]>nums[id])
                {
                    nums[i]=nums[i]^nums[id];
                    nums[id]=nums[id]^nums[i];
                     nums[i]=nums[i]^nums[id];
                    break;
                }
        }
    let i=id+1;
    let j=n-1;
    while(i<j)
        {
             nums[i]=nums[i]^nums[j];
                    nums[j]=nums[j]^nums[i];
                     nums[i]=nums[i]^nums[j];
            i++;
            j--;
        }
};