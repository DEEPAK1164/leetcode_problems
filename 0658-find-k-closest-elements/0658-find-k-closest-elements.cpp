class Solution {
public:
    vector<int>findClosestElements(vector<int>& arr, int k, int x) 
    {
        vector<int>v;
        int n=arr.size();
        priority_queue<pair<int,int>>pq;
       for(int i=0;i<n;i++)
       {
           pq.push(  make_pair(  abs(arr[i]-x),arr[i] )  );
           if(pq.size()>k)
           {
               pq.pop();
           }
       }
        while(!pq.empty())
        {
            int x=pq.top().second;
            v.push_back(x);
            pq.pop();
        }
        sort(v.begin(),v.end());
        return v;   
    }
};