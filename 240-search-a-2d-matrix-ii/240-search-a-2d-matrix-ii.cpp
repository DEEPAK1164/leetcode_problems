class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int rindex=0,cindex=c-1;
        while(rindex<r&&cindex>=0)
        {
            if(matrix[rindex][cindex]==target)
            {
               return true; 
            }
             if(matrix[rindex][cindex]<target)
            {
                rindex++;
            }
              else
            {
                cindex--;
            }
        
        }
        return false;   
    }
};