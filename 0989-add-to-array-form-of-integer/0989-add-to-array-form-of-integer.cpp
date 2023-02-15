class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>ans;
        int carry=0;
        int n=num.size();
        for(int i=n-1;i>=0;i--)
        {
          num[i]=num[i]+k%10+carry;
            ans.push_back(num[i]%10);
            carry=num[i]/10;
            k=k/10;
            
        }
        k=k+carry;
        while(k!=0)
        {
            ans.push_back(k%10);
            k=k/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};