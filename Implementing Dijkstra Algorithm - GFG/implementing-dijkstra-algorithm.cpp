//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution
{
    public:
        //Function to find the shortest distance of all the vertices
        //from the source vertex S.
        vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
        {
            // Code here
            priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>q;
            vector<int> parent(V, 0);
            vector<int> v;
            vector<int> dist(V, INT_MAX);
            dist[S] = 0;
            for(int i = 0; i < V; i++)
            {
                parent[i] = i;
            }
            q.push({0, S});
            while(!q.empty())
            {
                pair<int,int> temp = q.top();
                int d = temp.first;
                int node = temp.second;
class Solution
{
    public:
        //Function to find the shortest distance of all the vertices
        //from the source vertex S.
        vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
        {
            // Code here
            priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>q;
            vector<int> parent(V, 0);
            vector<int> v;
            vector<int> dist(V, INT_MAX);
            dist[S] = 0;
            for(int i = 0; i < V; i++)
            {
                parent[i] = i;
            }
            q.push({0, S});
            while(!q.empty())
            {
                pair<int,int> temp = q.top();
                int d = temp.first;
                int node = temp.second;
                v.push_back(d);
                q.pop();
                for(auto it : adj[node])
                {
                    int adjdist = it[1];
                    int adjnode = it[0];
                    if(d + adjdist < dist[adjnode])
                    {
                        dist[adjnode] = d + adjdist;
                        q.push({dist[adjnode], adjnode});
                    }
                }
            }
            // for(int i = 0; i < V; i++)
            // {
            //     v.push_back(dist[i]);
            // }
            return v;
        }
};

                
                q.pop();
                for(auto it : adj[node])
                {
                    int adjdist = it[1];
                    int adjnode = it[0];
                    if(d + adjdist < dist[adjnode])
                    {
                        dist[adjnode] = d + adjdist;
                        q.push({dist[adjnode], adjnode});
                    }
                }
            }
            for(int i = 0; i < V; i++)
            {
                v.push_back(dist[i]);
            }
            return v;
        }
};




//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends