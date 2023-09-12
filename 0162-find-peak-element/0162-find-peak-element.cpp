class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        	int low = 1, high = arr.size() - 2;
        int n=arr.size();
if(n==1)
    return 0;
        if(arr[0]>arr[1])
            return 0;
        if(arr[n-1]>arr[n-2])
            return n-1;
		while(low <= high)
		{
			int mid = (low + high) / 2;

			if((arr[mid - 1] <arr[mid]) &&
				(arr[mid + 1] <arr[mid]))
				return mid;
			if(arr[mid - 1] >=arr[mid])
				high = mid -1;
			else if(arr[mid - 1] <=arr[mid])
				low = mid + 1;
               else
               low=mid+1;
		}
	return -1;
    }
};