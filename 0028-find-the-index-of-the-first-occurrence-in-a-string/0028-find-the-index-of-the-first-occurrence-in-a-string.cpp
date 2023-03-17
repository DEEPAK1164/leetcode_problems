class Solution {
public:
    void fillLPS(string str, int *lps){
    int n=str.length(),len=0;
    lps[0]=0;
    int i=1;
    while(i<n){
        if(str[i]==str[len])
        {len++;lps[i]=len;i++;}
        else
        {if(len==0){lps[i]=0;i++;}
            else{len=lps[len-1];}
        }
    }
}
    void KMP(string txt,string pat,vector<int>&v){
    int N=txt.length();
    int M=pat.length();
    int lps[M];
    fillLPS(pat,lps);
    int i=0,j=0;
    while(i<N){
        if(pat[j]==txt[i]){i++;j++;}

        if (j == M) { 
            v.push_back(i-j);
            j = lps[j - 1]; 
        } 
        else if (i < N && pat[j] != txt[i]) { 
            if (j == 0) 
                i++;
            else
                j = lps[j - 1];  
        }
    }
}
 
    int strStr(string haystack, string needle) {
        vector<int>v;
        int lps[needle.size()];
        fillLPS(needle, lps);
        KMP( haystack,needle,v);
        if(v.size()==0)
            return -1;
        return v[0];
        
    }
};