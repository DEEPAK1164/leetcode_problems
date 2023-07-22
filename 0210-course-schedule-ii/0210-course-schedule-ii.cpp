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
    
    void dfs1(int node, vector<int> adj[],vector<int>&vis,stack<int>&st)
  {
      vis[node]=1;
      for (auto it:adj[node])
      {
    if(!vis[it])
    {
        dfs1(it,adj,vis,st);
    }
       }      
      st.push(node);
  }
  vector<int> topoSort(int V, vector<int> adj[]) 
  {
      // code here
      stack<int>st;
      vector<int>vis(V,0);
      for(int i=0;i<V;i++)
      {
          if(!vis[i])
          {
              dfs1(i,adj,vis,st);
          }
      }
      vector<int>v;
      while(!st.empty())
      {
          v.push_back(st.top());
          st.pop();
      }
      return v;
  }
    
    
    
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];
        for(auto it:prerequisites)
        {
            adj[it[1]].push_back(it[0]);
        }
        vector<int>vis( numCourses,0);
           vector<int>pvis( numCourses,0);
        
          for (int i = 0; i < numCourses; ++i) {
            if (!vis[i]) {
                if (dfs(i, adj, vis, pvis) == true) {
                    return {}; // If there is a cycle, it's not possible to finish all courses.
                }
            }  
        } 
        
        vector<int>v;
        
        return  topoSort(numCourses, adj) ;
        
        
        
        
    
    }
};