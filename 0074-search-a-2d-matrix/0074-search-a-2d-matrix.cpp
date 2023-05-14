class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int i=0;
        bool ok=false;
        int j=c-1;
        while(i<r&&j>=0)
        {
            if(matrix[i][j]==target)
            {
                ok=true;
                break;
            }
        if(matrix[i][j]<target)
        {
            i++;
        }
            else
            {
                j--;
            }
            
            
        }
        
        return ok;
    }
};