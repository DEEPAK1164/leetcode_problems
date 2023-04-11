class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]!='*')
            {
                st.push(s[i]);
            }
            else
            {
                st.pop();
            }
            
        }
        string ss;
        while(!st.empty())
        {
            ss+=st.top();
            st.pop();
        }
        reverse(ss.begin(),ss.end());
        return ss;
        
        
        
    }
};