class Solution {
public:
    int ctb(int n)
    {
    
    int ct=0;
    while(n){
      ct++;
      n =n>> 1;
   }
        return ct;
    }
    int minFlips(int a, int b, int c) {
        int ans=0;
        int xx=a;
        int yy=b;
        int zz=c;
        int x=ctb(xx);
       int  y=ctb(yy);
       int  z=ctb(zz);
        int len=max(max(x,y),z);
        while(len)
        {
            int stc=c&1;
            int sta=a&1;
            int stb=b&1;
            if(stc==0)
            {
                if(sta==1 && stb==1)ans+=2;
                else if(sta || stb) ans++;
            }
            else
            {
                if((sta==0)&&(stb==0))
                   {
                      ans++;
                   }
            }
            a=a>>1;
            b=b>>1;
            c=c>>1;    
            len--;       
        }
        
        return ans;
        
    }
};