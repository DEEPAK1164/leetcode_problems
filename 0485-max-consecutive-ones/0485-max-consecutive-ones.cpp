class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) 
    {
        int res=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int curr=0;
            for(int j=i;j<n;j++)
            {
                if(arr[j]==1)
                {
                    curr++;
                }
                else
                {
                    break;
                }
            }
            res=max(res,curr);
        }
        return res;
    }
};