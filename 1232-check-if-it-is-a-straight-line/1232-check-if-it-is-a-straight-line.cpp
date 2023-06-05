class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& v) 
    {
        vector<int>v1,v2;
        for(int i=0;i<v.size();i++)
        {
            if(v[i][0]==0)
            {
                v1.push_back(v[i][0]);
            }
            else if(v[i][1]==0)
            {
                v2.push_back(v[i][1]);
            }
        }
        
        
    
        double x1=(v[0][0])*1.0;
        double y1=(v[0][1])*1.0;
        double x2=(v[1][0])*1.0;
        double y2=(v[1][1])*1.0;
        double slope=(y2-y1)/(x2-x1);
        
        bool ok=true;
        
    
        for(int i=1;i<v.size();i++)
        {
           if(  slope!=((v[i][1]-v[0][1])*1.0)/((v[i][0]-v[0][0])*1.0 ))
           {
               ok=false;
               break;
           }
            
        }
     
        return ok|| (  v1.size()==v.size())||(v2.size()==v.size());
        
        
        
    }
};