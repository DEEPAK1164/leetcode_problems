class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> vis(m, vector<int> (n, 0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==2)
                {
                    vis[i][j]=1;
                    q.push({{i,j},0});
                    
                }
                else{
                    vis[i][j]=0;
                }
            }
        }
        int tm=0;
        int dr[]={1,0,-1,0};
        int dc[]={0,-1,0,1};
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            tm=t;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0 && nr<m && nc>=0 && nc<n && !vis[nr][nc] && grid[nr][nc]==1)
                {
                    q.push({{nr,nc},tm+1});
                    vis[nr][nc]=1;
                }   
            } 
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
            if(vis[i][j]!=1 && grid[i][j]==1)
                return -1;
            }
        }
        return tm;
    }
};