class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int x) {
        vector<int>v;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                v.push_back(matrix[i][j]);
            }
        }
        bool ok=false;
        int l=0,r=v.size()-1;
        int mid;
        while (l <= r) {
         mid = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (v[mid] == x)
        {
            ok=true;
            break;
        }
 
        // If x greater, ignore left half
        if (v[mid] < x)
            l = mid + 1;
 
        // If x is smaller, ignore right half
        else
            r = mid - 1;
    }
        
        return ok;
        
        
    }
};