class Solution {
public:
    bool possible(vector<int>& bloomDay,int md, int m, int k)
    {
        int n=bloomDay.size();
        int ct=0;
        int nbckt=0;
        for(int i=0;i<n;i++)
        {
            if(md>=bloomDay[i])
            {
                ct++;
            }
            else
            {
                nbckt+=ct/k;
                ct=0;
            }
        }
        nbckt+=ct/k;
        if(nbckt>=m)
            return true;
        return false; 
    }
    
    int minDays(vector<int>& bloomDay, int m, int k)
    {
        
        int n=bloomDay.size();
        if(m>n/k)
            return -1;
        
        int l=*min_element(bloomDay.begin(),bloomDay.end());
        int h=*max_element(bloomDay.begin(),bloomDay.end());
        int mid;
        int ans=h;
        while(l<=h)
        {
           mid=l+(h-l)/2;
            if(possible(bloomDay,mid,m,k))
            {
                ans=mid;
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
};