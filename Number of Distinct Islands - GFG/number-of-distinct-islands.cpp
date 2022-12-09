//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++...
class Solution {
    private:
    void dfs(int r,int c,vector<vector<int>>&vis,vector<vector<int>>&grid,
    vector<pair<int,int>>&vec, int baserow,int basecol)
    {
          int n=grid.size();
        int m=grid[0].size();
        vis[r][c]=1;
        vec.push_back({r-baserow,c-basecol   });
        int dr[]={-1,0,1,0};
        int dc[]={0,-1,0,1};
        for(int i=0;i<4;i++)
        {
            int nbr=r+dr[i];
            int nbc=c+dc[i];
            if(nbr>=0&&nbr<n&&nbc>=0&&nbc<m&&!vis[nbr][nbc]&&grid[nbr][nbc]==1)
            {
                dfs(nbr,nbc,vis,grid,vec,baserow,basecol);
            }
        }
    }
  public:
    int countDistinctIslands(vector<vector<int>> &grid) {
        // code here
       
        int n=grid.size();
        int m=grid[0].size();
         vector<vector<int>>vis(n,vector<int>(m,0));
        set<vector<pair<int,int>>>st;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j]&&grid[i][j]==1)
                {
                    vector<pair<int,int>>v;
                    dfs(i,j,vis,grid,v,i,j);
                    st.insert(v);
                }
            }
        }
        return st.size();
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
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends