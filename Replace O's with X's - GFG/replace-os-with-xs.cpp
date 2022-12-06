//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    private:
    void dfs(int r,int c,vector<vector<int>>&vis,vector<vector<char>>&mat,int dr[],int dc[])
    {
        int n=mat.size();
        int m=mat[0].size();
        vis[r][c]=1;
        //check for top right left bottom
        for(int i=0;i<4;i++)
        {
            int nbr=r+dr[i];
            int nbc=c+dc[i];
            if(nbr>=0&&nbr<n&&nbc>=0&&nbc<m&&!vis[nbr][nbc]&&mat[nbr][nbc]=='O')
            {
                dfs(nbr,nbc,vis,mat,dr,dc);
            }
        }
    }
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        //create visited matrix
        vector<vector<int>>vis(n,vector<int>(m,0));
        //traverse first row and last row
        for(int j=0;j<m;j++)
        {
            //first row
            if(!vis[0][j]&&mat[0][j]=='O')
            {
                dfs(0,j,vis,mat,dr,dc);
            }
            //last row
            if(!vis[n-1][j]&&mat[n-1][j]=='O')
            {
                dfs(n-1,j,vis,mat,dr,dc);
            }
        }
        //traverse 1st and last column
        for(int i=0;i<n;i++)
        {
            //1st column
            if(!vis[i][0]&&mat[i][0]=='O')
            {
                dfs(i,0,vis,mat,dr,dc);
            }
            //last column
            if(!vis[i][m-1]&&mat[i][m-1]=='O')
            {
                dfs(i,m-1,vis,mat,dr,dc);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j]&&mat[i][j]=='O')
                {
                    mat[i][j]='X';
                }
            }
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends