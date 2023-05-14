class Solution {
public:
    bool srch(vector<vector<int>>&matrix,int &p)
    {
        int mid;
        int l=0;
        bool ok=false;
        int x=matrix.size()*matrix[0].size();
        int r=x-1;
        while(l<=r)
        {
           mid=l+(r-l)/2;
            int i=mid/matrix[0].size();
            int j=mid%matrix[0].size();
            if(matrix[i][j]==p)
            {
                ok= true;
                break;
            }
            else if(matrix[i][j]<p)
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
       
        return srch(matrix,target);
    }
};