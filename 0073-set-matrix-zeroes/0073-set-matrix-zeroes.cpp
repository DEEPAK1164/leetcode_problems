class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         vector<pair<int, int>>v;
         int n= matrix.size();
         int m= matrix[0].size();
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                  if(matrix[i][j]==0)
                      v.push_back({i, j});
            }
        }
        
        for(int i=0;i<v.size();++i){
             for(int j=0;j<m;++j)
                  matrix[v[i].first][j]=0;
             for(int j=0;j<n;++j)
                  matrix[j][v[i].second]=0; }
    }
};