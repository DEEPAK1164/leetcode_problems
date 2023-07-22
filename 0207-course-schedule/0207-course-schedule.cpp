class Solution {
public:
    
    
    
    
    
    
    
    
    
    
     bool dfs(int node,vector<int> adj[],vector<int>&vis,vector<int>&pvis)
  {
      vis[node]=1;
      pvis[node]=1;
      for(auto it:adj[node])
      {
          if(!vis[it])
          {
              if(dfs(it,adj,vis,pvis)==true)
              return true;
          }
          else
          {
              if(pvis[it])
              {
                  return true;
              }
          }
      }
      pvis[node]=0;
      return false;
  }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites)
    {
        vector<int>adj[numCourses];
        for(auto it:prerequisites)
        {
            adj[it[0]].push_back(it[1]);
        }
        vector<int>vis( numCourses,0);
           vector<int>pvis( numCourses,0);
        
          for (int i = 0; i < numCourses; ++i) {
            if (!vis[i]) {
                if (dfs(i, adj, vis, pvis) == true) {
                    return false; // If there is a cycle, it's not possible to finish all courses.
                }
            }
              
        } 
        return true;
    }
};