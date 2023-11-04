//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++


class Solution {
public:
    // Function to merge k sorted arrays.
    class Triplet {
    public: // Make the member variables public
        int val, apos, vpos;

        Triplet(int val, int apos, int vpos) {
            this->val = val;
            this->apos = apos;
            this->vpos = vpos;
        }
    };

    class myComp {
    public: // Make the operator() public
        bool operator()(Triplet &t1, Triplet &t2) const {
            return t1.val > t2.val;
        }
    };

    vector<int> mergeKArrays(vector<vector<int>> arr, int K) {
        // code here
        vector<int> res;
        priority_queue<Triplet, vector<Triplet>, myComp> pq;
        for (int i = 0; i < arr.size(); i++) {
            Triplet t(arr[i][0], i, 0);
            pq.push(t);
        }

        while (!pq.empty()) {
            Triplet curr = pq.top();
            pq.pop();
            res.push_back(curr.val);
            int ap = curr.apos;
            int vp = curr.vpos;
            if (vp + 1 < arr[ap].size()) {
                Triplet t(arr[ap][vp + 1], ap, vp + 1);
                pq.push(t);
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}






// } Driver Code Ends