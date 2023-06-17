class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         int n=numRows;
        vector<vector<int>> v;
        for(int i=0;i<n;i++)
        {
            vector<int> ans;
          if(i==0)
                {
                    ans.push_back(1);
                }
                else if(i==1)
                {
                     ans.push_back(1);
                     ans.push_back(1);
                     
                }
                else{

            for(int j=0;j<=i;j++)
            {
                
                
                    if(j==0)
                    {
                        ans.push_back(1);
                        
                    }
                    else if(j>0 && j<i)
                    {
                      ans.push_back(v[i-1][j]+v[i-1][j-1]);
                                     
                    }
                    else if(j==i)
                    {
                        ans.push_back(1);
                    }
                }
            
            
        }


        v.push_back(ans);
        //ans.clear();
        
        }
        return v;
    }
};