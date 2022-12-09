//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        queue<pair<int,int>>q;
        int n=grid.size();
        int m=grid[0].size();
         vector<vector<int>>vis(n,vector<int>(m,0));
        // Code here
         for(int j=0;j<m;j++)
        {
            //first row
            if(grid[0][j]==1)
            {
              q.push(make_pair(0,j));
              vis[0][j]=1;
            }
            //last row
            if(grid[n-1][j]==1)
            {
                 q.push(make_pair(n-1,j));
                     vis[n-1][j]=1;
            }
        }
        //traverse 1st and last column
        for(int i=0;i<n;i++)
        {
            //1st column
            if(grid[i][0]==1)
            {
                q.push(make_pair(i,0));
                    vis[i][0]=1;
            }
            //last column
            if(grid[i][m-1]==1)
            {
                  q.push(make_pair(i,m-1));
                  vis[i][m-1]=1;
            }
        }
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
       while(!q.empty())
       {
           int r=q.front().first;
           int c=q.front().second;
           q.pop();
           //traverse all 4directions
           for(int i=0;i<4;i++)
           {
               int nbr=r+dr[i];
               int nbc=c+dc[i];
               if(nbr>=0&&nbr<n&&nbc>=0&&nbc<m&&!vis[nbr][nbc]&&grid[nbr][nbc]==1)
               {
                   q.push(make_pair(nbr,nbc));
                   vis[nbr][nbc]=1;
               }
           }
       }
       int ct=0;
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