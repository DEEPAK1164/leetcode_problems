class Solution {
public:
    bool srch(vector<int>&v,int &p)
    {
        int mid;
        int l=0;
        bool ok=false;
        int r=v.size()-1;
        while(l<=r)
        {
           mid=l+(r-l)/2;
            if(v[mid]==p)
            {
                ok= true;
                break;
            }
            else if(v[mid]<p)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        
        return ok; 
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       vector<int>ans;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                ans.push_back(matrix[i][j]);
            }
        }
        return srch(ans,target);
    }
};