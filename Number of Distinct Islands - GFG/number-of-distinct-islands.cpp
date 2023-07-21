//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void dfs(vector<vector<int>>& grid, vector<vector<int>>& vis, int sr, int sc, int n, int m, int dr[], int dc[], string& shape) {
        vis[sr][sc] = 1;
        for (int i = 0; i < 4; i++) {
            int nr = sr + dr[i];
            int nc = sc + dc[i];
            if (nr >= 0 && nr < n && nc >= 0 && nc < m && grid[nr][nc] == 1 && !vis[nr][nc]) {
                if (i == 0) shape += 'R';
                else if (i == 1) shape += 'D';
                else if (i == 2) shape += 'L';
                else shape += 'U';
                dfs(grid, vis, nr, nc, n, m, dr, dc, shape);
            }
        }
        shape += 'X'; // Add a delimiter at the end of each island's shape representation
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        
        int ct = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int dr[] = {0, 1, 0, -1};
        int dc[] = {1, 0, -1, 0};
        set<string> distinctIslands; // Use a set to store unique island shapes

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && !vis[i][j]) {
                    string shape = ""; // Store the shape representation of the island
                    dfs(grid, vis, i, j, n, m, dr, dc, shape);
                    distinctIslands.insert(shape);
                }
            }
        }
        return distinctIslands.size();
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