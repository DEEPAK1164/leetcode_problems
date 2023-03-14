class Solution {
public:
    vector<int>intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st(nums1.begin(),nums1.end());
        unordered_set<int>st1(nums2.begin(),nums2.end());
        vector<int>v;
        for(auto it=st1.begin();it!=st1.end();it++)
        {
            if(st.count(*it))
            {
                v.push_back(*it);
            }
        }
        return v;
    }
};