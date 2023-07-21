class Solution {
public:
    
    
    
    
    
    
    
    
    
    
    void dfs(vector<vector<int>>& grid,vector<vector<int>>& vis,int sr,int sc,int n,int m,int dc[],int dr[])
    {
      
        vis[sr][sc]=1;
        for(int i=0;i<4;i++)
        {
            int nr=sr+dr[i];
            int nc=sc+dc[i];
            if(nr>=0&&nr<n&&nc>=0&&nc<m&&!vis[nr][nc]&&grid[nr][nc]==1)
            {
                dfs(grid,vis,nr,nc,n,m,dc,dr);
            }
        } 
    }
    int numEnclaves(vector<vector<int>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int dr[]={0,1,0,-1};
        int dc[]={1,0,-1,0};
        for(int j=0;j<m;j++)
        {
            if(grid[0][j]==1&&!vis[0][j])
            {
                dfs(grid,vis,0,j,n,m,dr,dc);
            }
             if(grid[n-1][j]==1&&!vis[n-1][j])
            {
                dfs(grid,vis,n-1,j,n,m,dr,dc);
             }  
        }
        for(int i=0;i<n;i++)
        {
             if(grid[i][0]==1&&!vis[i][0])
            {
                dfs(grid,vis,i,0,n,m,dr,dc);
            }
             if(grid[i][m-1]==1&&!vis[i][m-1])
            {
                dfs(grid,vis,i,m-1,n,m,dr,dc);
            }
            
        }
        int ct=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1&&!vis[i][j])
                {
                    ct++;
                }
            }
        }
        
        return ct;
        
        
        
    }
};