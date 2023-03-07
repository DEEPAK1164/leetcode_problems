class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l=1,h=1e14,mid;
        sort(time.begin(),time.end());
        while(l<h)
        {
            long long sm=0;
            mid=l+(h-l)/2;
            for(int i=0;i<time.size();i++)
            {
              sm+=mid/time[i];
            }
            if(sm>=totalTrips)
            {
                //ans=min(mid,ans);
                h=mid;
            }
            else
                l=mid+1;
        }
        return h ;
    }
};