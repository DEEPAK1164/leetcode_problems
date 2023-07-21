class Solution {
public:
    

    bool dfs(vector<int>adj[],vector<int>&color,int node,int col)
    {
        color[node]=col;
        for(auto it:adj[node])
        {
            if(color[it]==-1)
            {
               if(dfs(adj,color,it,!col)==false)
                   return false;
            }
            else
            {
                if(color[it]==col)
                {
                    return false;
                }
            }
        }
       return true;  
    }
    bool isBipartite(vector<vector<int>>& graph)
    {
        int n=graph.size();
        vector<int>adj[n];
        for(int i=0;i<graph.size();i++)
        {
            for(int j=0;j<graph[i].size();j++)
            {
                adj[i].push_back(graph[i][j]);
            }
        }
        vector<int>color(n,-1);
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                if(dfs(adj,color,i,0)==false)
                    return false;
                
            }
        }
        return true;   
    }
};