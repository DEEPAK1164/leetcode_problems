class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
    
        int l=1;
        int e=1e9;
        int mid=0;
        int ans=INT_MAX;
        while(l<=e)
        {
            long long int sm=0;
            mid=l+(e-l)/2;
            for (int i = 0; i < piles.size(); i ++) 
            {
                if(piles[i]%mid==0)
                sm += piles[i] / mid;
            else
                sm+=(piles[i] / mid)+1;
            }
        
            if(sm<=h)
            {
                 ans=mid;
                e=mid-1;
               
            }
            else
                l=mid+1;  
        }
        return ans; 
    }
};