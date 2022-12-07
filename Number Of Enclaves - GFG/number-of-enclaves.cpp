//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    private:
    void dfs(int r,int c,vector<vector<int>>&vis,vector<vector<int>>&mat,int dr[],int dc[])
    {
        int n=mat.size();
        int m=mat[0].size();
        vis[r][c]=1;
        //check for top right left bottom
        for(int i=0;i<4;i++)
        {
            int nbr=r+dr[i];
            int nbc=c+dc[i];
            if(nbr>=0&&nbr<n&&nbc>=0&&nbc<m&&!vis[nbr][nbc]&&mat[nbr][nbc]==1)
            {
                dfs(nbr,nbc,vis,mat,dr,dc);
            }
        }
    }
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int ct=0;
        int n=grid.size();
        int m=grid[0].size();
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        //create visited matrix
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int j=0;j<m;j++)
        {
            //first row
            if(!vis[0][j]&&grid[0][j]==1)
            {
                dfs(0,j,vis,grid,dr,dc);
            }
            //last row
            if(!vis[n-1][j]&&grid[n-1][j]==1)
            {
                dfs(n-1,j,vis,grid,dr,dc);
            }
        }
        //traverse 1st and last column
        for(int i=0;i<n;i++)
        {
            //1st column
            if(!vis[i][0]&&grid[i][0]==1)
            {
                dfs(i,0,vis,grid,dr,dc);
            }
            //last column
            if(!vis[i][m-1]&&grid[i][m-1]==1)
            {
                dfs(i,m-1,vis,grid,dr,dc);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j]&&grid[i][j]==1)
                {
                  ct++;
                }
            }
        }
        return ct;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends