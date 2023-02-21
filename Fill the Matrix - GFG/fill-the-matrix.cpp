//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution{   
public:
    int minIteration(int n, int m, int x, int y){    
        // code here
        queue<pair<int,int>>q;
        q.push({x-1,y-1});
        int grid[n][m];
    int i,j;
         for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                grid[i][j]=0;
            }
        }
        grid[x-1][y-1]=1;
        // if(n==1&&m==1&&x==1&&y==1)
        // {
        // return 0;
        // }
       int level=-1;
       while(!q.empty())
       {
           level++;
           int size=q.size();
           while(size--)
           {
              
                 int x1=q.front().first;
              int y1=q.front().second;
              q.pop();
               int dRow[] = { -1, 0, 1, 0 };
                int dCol[] = { 0, 1, 0, -1 };
                for (int i = 0; i < 4; i++) {
            int adjx = x1 + dRow[i];
            int adjy = y1 + dCol[i];
             if ((adjx>=0 &&adjy>=0
             &&adjx<n && adjy <m)&&grid[adjx][adjy]==0){
                q.push({ adjx, adjy });
                grid[adjx][adjy] = 1;
                 }
             }
       
            }
        }
    return level;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M, x, y;
        cin >> N >> M;
        cin >> x >> y;
        
        Solution ob;
        cout << ob.minIteration(N, M, x, y) << endl;
    }
    return 0; 
} 
// } Driver Code Ends