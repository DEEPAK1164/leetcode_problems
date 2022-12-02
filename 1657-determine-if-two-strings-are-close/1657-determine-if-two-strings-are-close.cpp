class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        if(n1!=n2)
        {
            return false;
        }
        set<char>st1;
        set<char>st2;
        for(int i=0;i<n1;i++)
        {
            st1.insert(word1[i]);
            st2.insert(word2[i]);
        }
        string s1,s2;
        for(auto it1:st1)
        {
            s1.push_back(it1);
        }
        for(auto it2:st2)
        {
            s2.push_back(it2);
        }
        sort(s1.begin(),s1.end());
         sort(s2.begin(),s2.end());
        if(s1!=s2)
        {
            return false;
        }
        map<int,int>mp1;
        map<int,int>mp2;
        for(int i=0;i<n1;i++)
        {
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }
        vector<int>v1;
        vector<int>v2;
        for(auto it:mp1)
        {
           v1.push_back(it.second); 
        }
         for(auto it:mp2)
        {
           v2.push_back(it.second); 
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(v1==v2)
        return true;
        else
            return false;
        
        
    }
};