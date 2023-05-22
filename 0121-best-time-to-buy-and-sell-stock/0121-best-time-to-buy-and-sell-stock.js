/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
     var mn=10001;
        var n=prices.length;
        var p=0;
        for(let i=0;i<n;i++)
        {
        
            mn=(mn<=prices[i])?mn:prices[i];
            p=(p>=prices[i]-mn ?p:prices[i]-mn);
        
        }
        return p;
};