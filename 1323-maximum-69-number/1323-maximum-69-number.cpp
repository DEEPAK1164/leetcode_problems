class Solution {
public:
    int maximum69Number (int num) {
        vector<int>v;
        while(num!=0)
        {
            v.push_back(num%10);
            num=num/10;
        }
        reverse(v.begin(),v.end());
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==6)
            {
                v[i]=9;
                break;
            }
        }
        int sum=0;
        int x=v.size()-1;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i]*pow(10,x);
            x--;
        }
        return sum;
        
    }
};