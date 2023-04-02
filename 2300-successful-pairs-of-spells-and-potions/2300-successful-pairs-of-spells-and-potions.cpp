class Solution {
public:

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        //int upper1 = std::upper_bound(v.begin(), v.end(), 35)-v.begin();
        sort(potions.begin(),potions.end());
        int m=potions.size();
        int n=spells.size();
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            long long int d=(ceil)((double)(1.0*success)/spells[i]);
            int ind=lower_bound(potions.begin(),potions.end(),(int)d)-potions.begin();
          
            if(d>potions[m-1]){v.push_back(0);continue;}
                v.push_back(m-ind);
           
        }  
        return v;
    }
};