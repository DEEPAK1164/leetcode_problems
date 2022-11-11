class Solution {
public:
    vector<int>intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums1.size();i++)
        {
            if(binary_search(nums2.begin(),nums2.end(),nums1[i]))
            {
                st.insert(nums1[i]);
            }
        }
        vector<int>v;
        for(auto it:st)
        {
            v.push_back(it);
        }
        return v;
    }
};