class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int sm=0;
        if(n%2==1)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=i;j<m;j++)
                {
                    if(i==j)
                    {
                        sm+=mat[i][j];
                    
                    }
                }
            }
            for(int i=0;i<n;i++)
            {
                for(int j=m-1;j>=0;j--)
                {
                    if(i+j==n-1)
                    {
                        sm+=mat[i][j];
                    }
                }
            }
            int x=n/2;
            sm-=mat[x][x];
        }
        else
        {
           for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(i==j)
                    {
                        sm+=mat[i][j];
                    }
                }
            } 
            
             for(int i=0;i<n;i++)
            {
                for(int j=m-1;j>=0;j--)
                {
                    if(i+j==n-1)
                    {
                        sm+=mat[i][j];
                    }
                }
            }
            
        }
        
        return sm;
        
    }
};