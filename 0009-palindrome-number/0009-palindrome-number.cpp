class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        vector<int>v;
        int rem=0;
        while(x>0)
        {
             rem=x%10;
            x=x/10;
            v.push_back(rem);
        }
        int n=v.size();
        int i=0,j=n-1;
        cout<<n<<" ";
        for(i=0,j=n-1;i<n;i++)
        {
    
            if(v[i]!=v[j])
                return false;
            j--;
            // break;
        }
        return true;  
    }
};