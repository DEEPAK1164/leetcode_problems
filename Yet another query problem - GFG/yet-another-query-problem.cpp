//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> solveQueries(int n, int num, vector<int> &arr, vector<vector<int>> &que) {
        // code here
        unordered_map<int,int> mp;
        vector<int> val(n);
        
        for(int i=n-1; i>=0; i--){
            mp[arr[i]]++;
            val[i] = mp[arr[i]];
        }
        
        vector<int> res;
        
        for(auto q : que){
            int l = q[0];
            int r = q[1];
            int freq = q[2];
            int cnt = 0;
            
            for(int i=l; i<=r; i++){
                if(val[i] == freq){
                    cnt++;
                }
            }
            
            res.push_back(cnt);
        }
        
        return res;
        
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends