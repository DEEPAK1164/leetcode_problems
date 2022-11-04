class Solution {
public:
     bool isvow(char ch){
       return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' ||ch=='U');
     }
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        while(i<=j){
            while(!isvow(s[i]) && i<j)i++;
            while(!isvow(s[j]) && i<j)j--;
           swap(s[i],s[j]);
            i++,j--;
        }
        return s;
    }

};