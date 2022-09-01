class Solution {
public:
    string removeDuplicates(string s) {
         stack<char>st;
        string s1;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
                st.push(s[i]);
           else if(st.top()==s[i])
                st.pop();
            else 
                st.push(s[i]);
        }
    
    while(st.empty()!=1)
    {
        char ch=st.top();
        s1.push_back(ch);
        st.pop();
    }
        int l=0,h=s1.size()-1;
        while(l<=h)
        {
            swap(s1[l++],s1[h--]);
        }
    return s1;
    
    }
};