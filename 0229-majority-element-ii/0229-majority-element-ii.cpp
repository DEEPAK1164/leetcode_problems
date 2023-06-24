class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ct1=0,ct2=0;
        int e1,e2;
        for(int i=0;i<n;i++)
        {
            if(ct1==0&&nums[i]!=e2)
            {
               ct1=1;
                e1=nums[i];
            }
            else if(ct2==0&&nums[i]!=e1)
            {
                ct2=1;
                e2=nums[i];
            }
            else if(nums[i]==e1)
            {
                ct1++;
            }
            else if(nums[i]==e2)
            {
                ct2++;
            }
            else
            {
                ct2--;
                ct1--;
            } 
        }
        vector<int>v;
         ct1=0,ct2=0;
        for(int i=0;i<n;i++)
        {
            if(e1==nums[i])
            {
                ct1++;
            }
            if(e2==nums[i])
            {
                ct2++;
            }
        }
        if(ct1>n/3)
            v.push_back(e1);
        if(ct2>n/3)
            v.push_back(e2);
        return v;
        
    }
};