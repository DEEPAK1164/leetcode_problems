class Solution {
public:
    void dfs(int node,vector<int>adj[],vector<int>&vis)
    {
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                dfs(it,adj,vis);
            }
        } 
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int ct=0;
        vector<int>adj[n+1];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(isConnected[i][j]==1)
                    {
                        adj[i].push_back(j);
                        adj[j].push_back(i);
                    }
                }
            }
        }
        vector<int>vis(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                ct++;
                dfs(i,adj,vis);
            }
        }
        return ct;
    }
};