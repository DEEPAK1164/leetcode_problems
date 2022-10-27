//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
//   void dfs(int node, vector<int>adjls[],int vis[])
//   {
//       vis[node]=1;
//       for(auto it:adjls[node])
//       {
//           if(!vis[it])
//           {
//               dfs(it,adjls,vis);
//           }
//       }
//   }
void bfs(int start,vector<int>adjls[],int vis[])
{
    vis[start]=1;
    queue<int>q;
    q.push(start);
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        for(auto it:adjls[node])
        {
            if(!vis[it])
            {
                vis[it]=1;
                q.push(it);
            }
        }
    }
}

    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<int>adjls[V];
        //changing adjacency matrix to list
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(adj[i][j]==1&&i!=j)
                {
                    adjls[i].push_back(j);
                    adjls[i].push_back(j);
                }
            }
        }
        int vis[V]={0};
        int ct=0;
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                ct++;
                bfs(i,adjls,vis);
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
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends