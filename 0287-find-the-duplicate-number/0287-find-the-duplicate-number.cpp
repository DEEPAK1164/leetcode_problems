class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int n=arr.size();
       	bool visit[n];
	
	memset(visit, false, sizeof(visit));
	
	for(int i = 0; i < n; i++)
	{
		if(visit[arr[i]])
			return arr[i];
		visit[arr[i]] = true;
	}

	return -1;
    }
};