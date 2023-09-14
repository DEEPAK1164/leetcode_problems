class Solution {
public:
     bool feasible(vector<int>& weights, int c, int days) {
        int daysNeeded = 1, currentLoad = 0;
        for (int weight : weights) {
            currentLoad += weight;
            if (currentLoad > c) {
                daysNeeded++;
                currentLoad=weight;
            }
        }

        return daysNeeded <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) 
    {
        
         int totalLoad = 0, mn = INT_MIN;
        for (int weight : weights) {
            totalLoad += weight;
            mn = max(mn, weight);
        }

        int l = mn, r = totalLoad;

        while (l <=r) {
            int mid = l+(r-l)/ 2;
            if (feasible(weights, mid, days)) {
                r = mid-1;
            } else {
                l = mid + 1;
            }
        }
        return l;
        
        
    }
};