class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
       
       
        int l=1;
        int e=1e9;
        int mid=0;
        while(l<e)
        {
            int sm=0;
            mid=l+(e-l)/2;
            for (int i = 0; i < piles.size(); i ++) 
                sm += ceil(1.0 * piles[i] / mid);
        
            if(sm<=h)
                e=mid;
            else
                l=mid+1;  
        }
        return e; 
    }
};