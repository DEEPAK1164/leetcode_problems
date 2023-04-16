class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
       vector<int>matrow(n,0);
        vector<int>matcol(m,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrow[i]=1;
                    matcol[j]=1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
        {
            
                if(matrow[i]||matcol[j])
                {
                    matrix[i][j]=0;
                }
                
           
        }
        }
    }
};