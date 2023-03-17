class Solution {
public:
    #define d 256
const int q=101;
void RBSearch(string txt,string pat,int N, int M,vector<int>&v){
    
    //Compute (d^(M-1))%q
    int h=1;
    for(int i=1;i<=M-1;i++)
        h=(h*d)%q;
    
    //Compute p and to
    int p=0,t=0;
    for(int i=0;i<M;i++){
        p=(p*d+pat[i])%q;
        t=(t*d+txt[i])%q;
    }
    
    for(int i=0;i<=(N-M);i++){
       //Check for hit
       if(p==t){
           bool flag=true;
           for(int j=0;j<M;j++)
                if(txt[i+j]!=pat[j]){flag=false;break;}
            if(flag==true)
                v.push_back(i);
       }
       //Compute ti+1 using ti
       if(i<N-M){
           t=((d*(t-txt[i]*h))+txt[i+M])%q;
        if(t<0)t=t+q;
       }
    }
    
}
    int strStr(string haystack, string needle)
    {
        vector<int>ans;
        RBSearch( haystack,needle,haystack.size(), needle.size(),ans);
        if(ans.size()==0)
            return -1;
        return ans[0];
        
        
      
    }
};