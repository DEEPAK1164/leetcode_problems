class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int x) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0;
        int j=m-1;
        while(i<=n-1&&j>=0)
        {
            if(matrix[i][j]==x)
                return true;
            if(matrix[i][j]>x)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
};