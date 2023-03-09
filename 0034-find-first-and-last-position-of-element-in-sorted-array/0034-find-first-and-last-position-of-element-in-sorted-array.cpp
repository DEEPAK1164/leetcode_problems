class Solution {
public:
    int left(vector<int>&v,int l,int r,int x)
    {
        int mid=l+(r-l)/2;
        if(l>r)
            return -1;
        if(v[mid]>x)
            return left(v,l,mid-1,x);
        else if(v[mid]<x)
            return left(v,mid+1,r,x);
        else
        {
            if(mid==0||v[mid]!=v[mid-1])
            return mid;
            else
                return left(v,l,mid-1,x);
        } 
    }
     int right(vector<int>&v,int l,int r,int x)
            {
                
        int mid=l+(r-l)/2;
        if(l>r)
            return -1;
        if(v[mid]>x)
            return right(v,l,mid-1,x);
        else if(v[mid]<x)
            return right(v,mid+1,r,x);
        else
        {
            if(mid==v.size()-1||v[mid]!=v[mid+1])
            return mid;
            else
                return right(v,mid+1,r,x);
        } 
            }
        
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>ans;
        int xx=left(nums,0,nums.size()-1,target);
        int yy=right(nums,0,nums.size()-1,target);
        ans.push_back(xx);
        ans.push_back(yy);
        return ans;
    }
};