class Solution {
public:
     int dfs(int node,vector<int>adj[],vector<bool>&vis)
        {
            int ct=1;
            vis[node]=true;
            for(auto nbr:adj[node])
            {
                if(!vis[nbr])
                {
                    ct+=dfs(nbr,adj,vis);
                }
            }
         return ct;
         
        }
    long long countPairs(int n, vector<vector<int>>& edges) 
    {
       vector<int>adj[n];
        for(auto it:edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        long long szc=0;
        long long pr=0;
        long long nn=n;
    vector<bool>vis(n);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
            szc=dfs(i,adj,vis);
            pr+=szc*(nn-szc);
            }
        }
        return pr/2;
        
        
        
    }
};