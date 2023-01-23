//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        // code here
        int n=s.size();
        stack<char>st;
        st.push(s[0]);
        for(int i=1;i<n;i++)
        {
            if(st.empty())
            {
            st.push(s[i]);
            }
            else
            {
            if(s[i]==st.top())
            {
                st.pop();
            }
            else 
            {
                st.push(s[i]);
            }
            }
        }
        string ans;
          if(st.empty())
        return "-1";
        while(!st.empty())
        {
            char ch=st.top();
            ans.push_back(ch);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
      
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends