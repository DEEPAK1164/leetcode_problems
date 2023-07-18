class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        int m=image.size();
        int n=image[0].size();
        int clr=image[sr][sc];
        queue<pair<int,int>>q;
        q.push({sr,sc});
        int dr[]={1,0,-1,0};
        int dc[]={0,-1,0,1};
     vector<vector<bool>> visited(m, vector<bool>(n, false));
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
              image[r][c]=color;
            visited[r][c] = true;
               q.pop();
            for(int i=0;i<4;i++)
            {
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0&&nr<m&&nc>=0&&nc<n&&image[nr][nc]==clr&&!visited[nr][nc])
                {
                  
                    q.push({nr,nc});
                }
                
            }
        }
        return image;   
    }
};