/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
  let n=prices.length;;
    let mx=0;
    let mn=prices[0];
    for(let i=1;i<n;i++)
        {
            mx=Math.max(mx,prices[i]-mn);
            mn=Math.min(mn,prices[i]);
        }
    return mx;
};