class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size();
        vector<int>v;
        int c=matrix[0].size();
        int sr=0;
        int sc=0;
        int er=r-1;
        int ec=c-1;
        int ct=0;
        while(ct<r*c)
        {
            //1st row
            for(int i=sc;i<=ec&&ct<r*c;i++)
            {
                v.push_back(matrix[sr][i]);
                ct++;
            }
            
            
            sr++;
            //last col
            for(int i=sr;i<=er&&ct<r*c;i++)
            {
                v.push_back(matrix[i][ec]);
                ct++;
            }
            ec--;
            //last row
            for(int i=ec;i>=sc&&ct<r*c;i--)
            {
                v.push_back(matrix[er][i]);
                ct++;
            }
            er--;
            //1st col
             for(int i=er;i>=sr&&ct<r*c;i--)
            {
                v.push_back(matrix[i][sc]);
                ct++;
            }
            sc++;
        }
        return v;
        
    }
};