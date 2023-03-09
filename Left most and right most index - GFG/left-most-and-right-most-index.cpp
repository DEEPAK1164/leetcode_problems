//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    long long left(vector<long long>&v,long long l,long long r,long long x)
    {
        long long mid=l+(r-l)/2;
        if(l>r)
        return -1;
        if(v[mid]>x)
        return left(v,l,mid-1,x);
        else if(v[mid]<x)
        return left(v,mid+1,r,x);
        else
        {
            if(mid==0||v[mid]!=v[mid-1])
            return mid;
            else
            return left(v,l,mid-1,x);
        }
    }
     long long right(vector<long long>&v,long long l,long long r,long long x)
    {
       
        long long mid=l+(r-l)/2;
        if(l>r)
        return -1;
        if(v[mid]>x)
        return right(v,l,mid-1,x);
        else if(v[mid]<x)
        return right(v,mid+1,r,x);
        else
        {
            if(mid==v.size()-1||v[mid]!=v[mid+1])
            return mid;
            else
            return right(v,mid+1,r,x);
        }
    }
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        long long n=v.size();
        n=n-1;
        pair<long,long>ans;
        long long xx,yy;
        xx=left(v,0,n,x);
        yy=right(v,0,n,x);
        ans.first=xx;
        ans.second=yy;
        return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends