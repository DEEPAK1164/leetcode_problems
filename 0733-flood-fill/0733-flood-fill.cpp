class Solution {
public:
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    void dfs(vector<vector<int>>& image,vector<vector<int>>& ans, int sr, int sc, int color,int dr[],int dc[],int ic)
    {
        int m=image.size();
        int n=image[0].size();
       ans[sr][sc]=color;
       
        for(int i=0;i<4;i++)
        {
            int nr=sr+dr[i];
            int nc=sc+dc[i];
            if(nr>=0&&nr<m&&nc>=0&&nc<n&&ans[nr][nc]!=color&&image[nr][nc]==ic)
            {
                dfs(image,ans,nr,nc,color,dr,dc,ic);
            }    
        }  
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)
    {
        vector<vector<int>>ans=image;
        int ic=image[sr][sc];
        int dr[]={1,0,-1,0};
        int dc[]={0,1,0,-1};
        dfs(image,ans,sr,sc,color,dr,dc,ic); 
        return ans;     
    }
};