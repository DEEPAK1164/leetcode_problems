class Solution {
public:
    void lr(vector<vector<int>>& mat,vector<vector<int>>& target)
    {
        int n=mat.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            reverse(mat[i].begin(),mat[i].end());
        }
       
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target)
    {
        bool ok=false;
        for(int i=0;i<4;i++)
        {
          lr(mat,target);
            if(mat==target)
            {
                ok=true;
                break;
            }
        }
        if(ok)
            return true;
        return false;
    }
};