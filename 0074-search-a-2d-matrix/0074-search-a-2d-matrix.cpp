class Solution {
public:
    bool bs(vector<int>&v,int x)
    {
        int l=0;
        int r=v.size()-1;
        int mid;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(v[mid]==x)
                return true;
            if(v[mid]<x)
            {
              l=mid+1;  
            }
            else
            {
                r=mid-1;
            }
        }
        return false;
        
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            if(bs(matrix[i],target))
            {
                return true;
            }
        }
        return false;
    }
};