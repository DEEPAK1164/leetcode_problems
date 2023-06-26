class Solution {
public:
     int ct=0;
 void merge(vector<int>&arr,int l,int mid,int h)
    {
        int left=l;
        int right=mid+1;
     
        vector<int>temp;
        
        while(left<=mid&&right<=h)
        {
            //left is smaller
            if(arr[left]<=arr[right])
            {
                temp.push_back(arr[left++]);
            }
            //right is smaller
            else
            {
                //ct+=(mid-left+1);
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
    void countPairs(vector<int>&arr,int l,int mid,int h)
    {
        int left=l;
        int right=mid+1;
        for(int i=l;i<=mid;i++)
        {
            
            while(right<=h&&arr[i]>2LL*arr[right])
            {
                right++;
            }
            ct+=right-(mid+1);
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
        //before merging do count pairs below
       countPairs(arr,l,mid,h);
        merge(arr,l,mid,h);
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
         ms(nums,0,n-1);
        return ct;
    }
};