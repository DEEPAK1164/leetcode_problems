class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int>st;
        for(auto x:asteroids)
        {
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            if(x>0)
            {
                st.push(x);
            }
            else
            {
                while(!st.empty()&&st.top()>0&&st.top()<-x)
                {
                    st.pop();
                }
                if(!st.empty()&&st.top()==-x)
                {
                    st.pop();
                }
                else if(!st.empty() && st.top()>-x)
                {
                    
                }
            else {
                st.push(x);
            }
                
            }
        }
        vector<int>v;
        while(!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};