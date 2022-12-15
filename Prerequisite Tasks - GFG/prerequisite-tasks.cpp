//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	   // int vis[N];
	    vector<int>adj[N];
        for(auto it:prerequisites)
        {
            //adj[edges[i][0]].push_back(edges[i][1]);
             adj[it.second].push_back(it.first);
        }
        
        vector<int>ans;
	    queue<int>q;
	    int id[N]={0};
	    for(int i=0;i<N;i++)
	    {
	        for(auto it:adj[i])
	        {
	            id[it]++;
	        }
	    }
	    for(int i=0;i<N;i++)
	    {
	        if(id[i]==0)
	        {
	            q.push(i);
	        }
	    }
	    while(!q.empty())
	    {
	        int node=q.front();
	        q.pop();
	        ans.push_back(node);
	        for(auto it:adj[node])
	        {
	            id[it]--;
	            if(id[it]==0)
	            {
	                q.push(it);
	            }
	        }
	    }
	    
	   if(ans.size()==N)
	   return true;
	   return false;
        
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends