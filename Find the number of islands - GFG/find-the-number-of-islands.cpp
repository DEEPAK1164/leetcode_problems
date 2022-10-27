//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  void bfs(int r,int c,vector<vector<int>>&vis,vector<vector<char>>grid)
  {
      int n=grid.size();
      int m=grid[0].size();
   vis[r][c]=1;
   queue<pair<int,int>>q;
   q.push({r,c});
   while(!q.empty())
   {
       int r=q.front().first;
       int c=q.front().second;
       q.pop();
       //traverse to find the neighbour and mark them if it is a land
       for(int deltarow=-1;deltarow<=1;deltarow++)
       {
           for(int deltacol=-1;deltacol<=1;deltacol++)
           {
               int nibrrow=r+deltarow;
               int nibrcol=c+deltacol;
               if(nibrrow>=0&&nibrrow<n&&nibrcol>=0&&nibrcol<m
               &&grid[nibrrow][nibrcol]=='1'&&!vis[nibrrow][nibrcol])
               {
                   vis[nibrrow][nibrcol]=1;
                   q.push({nibrrow,nibrcol});
               }
           }
       }
   }
  }
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int ct=0;
        int n=grid.size();
        int m=grid[0].size();
        //int vis[n][m]={'0'};
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j]&&grid[i][j]=='1')
                {
                    ct++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return ct;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends