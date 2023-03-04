//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    void dfs(int i,vector<int>& vis,vector<vector<int>>& adj,stack<int>& st){
        vis[i]=1;
        for(auto it:adj[i]){
            if(!vis[it]) dfs(it,vis,adj,st);
        }
        st.push(i);
        return;
    }
    void dfs2(int i,vector<int>&vis,vector<int> adjr[]){
         vis[i]=1;
        for(auto it:adjr[i]){
            if(!vis[it]) dfs2(it,vis,adjr);
        }
        
        return;
    }
	public:
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int v, vector<vector<int>>& adj)
    {

        vector<int> vis(v,0);
        stack<int> st;//stores top as first ele of 1st scc(lifo)
        for(int i=0;i<v;i++){// it sorts ele as per scc in st
            if(!vis[i]) dfs(i,vis,adj,st);
        }
        
        vector<int> adjr[v];// reverse arrow dir of nod
        for(int i=0;i<v;i++){
            vis[i]=0;
            for(auto it:adj[i]){
                //i->it,,, it->i(make this)
                adjr[it].push_back(i);
            }
        }
        
        int cnt=0;
       
        while(!st.empty()){
            int nod=st.top();
            st.pop();
            if(!vis[nod]){
                cnt++;
                dfs2(nod,vis,adjr);// dfs would be called for 1st ele of scc (0 3 4)
            }
        }
        return cnt;
        
        
        
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends