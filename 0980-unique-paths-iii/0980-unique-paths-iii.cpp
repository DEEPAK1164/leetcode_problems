class Solution {
public:
      int zero;
    int rec(int r,int c,int m,int n,int s,vector<vector<int>>&v)
    {
        if(r>=m||c>=n||c<0||r<0||v[r][c]==-1)
            return 0;
        if(v[r][c]==2)
        {
            return s==zero+1?1:0;
        }
       
        v[r][c]=-1;
        
    int ind= rec(r,c-1,m,n,s+1,v)+rec(r,c+1,m,n,s+1,v)+rec(r-      1,c,m,n,s+1,v)+rec(r+1,c,m,n,s+1,v);
        v[r][c]=0;
        return ind;
        
        
        
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int sx,sy;
      
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    sx=i;
                    sy=j;
                
                }
                if(grid[i][j]==0)
                {
                    zero++;
                }
            }
        
        }
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        int ans=rec(sx,sy,m,n,0,grid);
        return ans;
    }
};