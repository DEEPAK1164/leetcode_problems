class Solution {
public:
    void merge(vector<int>&arr,int l,int mid,int h)
    {
        int left=l;
        int right=mid+1;
        
        vector<int>temp;
        
        while(left<=mid&&right<=h)
        {
            if(arr[left]<=arr[right])
            {
                temp.push_back(arr[left++]);
            }
            else
            {
                temp.push_back(arr[right++]);
            }
        }
        while(left<=mid)
        {
            temp.push_back(arr[left++]);
        }
        while(right<=h)
        {
            temp.push_back(arr[right++]);
        }
        for(int i=l;i<=h;i++)
        {
            arr[i]=temp[i-l];
        }   
    }
    void ms(vector<int>&arr,int l,int h)
    {
        if(l>=h)
        {
            return;
        }
        int mid=l+(h-l)/2;
        ms(arr,l,mid);
        ms(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
    vector<int> sortArray(vector<int>& nums) {
      int n=nums.size();
        ms(nums,0,n-1);
        return nums;
        
    }
};