//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
void rec(int ind,int sum,vector<int>&v,int n,vector<int>&ans)
{
    if(ind==n)
    {
        ans.push_back(sum);
        return;
    }
    rec(ind+1,sum+v[ind],v,n,ans);
    rec(ind+1,sum,v,n,ans);
    
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ansr;
        rec(0,0,arr,N,ansr);
        sort(ansr.begin(),ansr.end());
        return ansr;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends