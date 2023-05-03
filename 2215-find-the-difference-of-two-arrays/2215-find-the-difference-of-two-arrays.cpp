class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st1,st2;
        vector<int>nums11,nums22;
        
        
        
        for(int i=0;i<nums1.size();i++)
        {
            st1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            st2.insert(nums2[i]);
        }
         for (auto it = st1.begin(); it !=
                             st1.end(); ++it)
        nums11.push_back(*it);
        
         for (auto it = st2.begin(); it !=
                             st2.end(); ++it)
        nums22.push_back(*it);
        
        
        vector<vector<int>>v;
        vector<int>v1,v2;
        for(int i=0;i<nums11.size();i++)
        {
            if(st2.count(nums11[i])!=1)
            {
                v1.push_back(nums11[i]);
            }
        }
        v.push_back(v1);
        for(int i=0;i<nums22.size();i++)
        {
            if(st1.count(nums22[i])!=1)
            {
                v2.push_back(nums22[i]);
            }
        }
        v.push_back(v2);
        return v;
    }
};