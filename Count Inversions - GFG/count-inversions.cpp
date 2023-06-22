//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long ct=0;
 void merge(long long arr[],long long l,long long mid,long long h)
    {
        long long left=l;
        long long right=mid+1;
        
        vector<long long>temp;
        
        while(left<=mid&&right<=h)
        {
            //left is smaller
            if(arr[left]<=arr[right])
            {
                temp.push_back(arr[left++]);
            }
            //right is smaller
            else
            {
                ct+=(mid-left+1);
                temp.push_back(arr[right++]);
            }
        }
        while(left<=mid)
        {
            temp.push_back(arr[left++]);
        }
        while(right<=h)
        {
            temp.push_back(arr[right++]);
        }
        for(int i=l;i<=h;i++)
        {
            arr[i]=temp[i-l];
        }   
    }
    void ms(long long arr[],long long l,long long h)
    {
        if(l>=h)
        {
            return;
        }
        int mid=l+(h-l)/2;
        ms(arr,l,mid);
        ms(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        ms(arr,0,N-1);
        return ct;
    }
    
    
    
    
    
    
    

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends