class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx=INT_MIN;
        int p1=1,p2=1;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
             p1*=nums[i];
                 p2*=nums[n-i-1];;
            mx=max(mx,max(p1,p2));
            if(p1==0)
            {
                p1=1;
            }
             if(p2==0)
            {
                p2=1;
            }
        }
        return mx;
    }
};