class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {

      stack<int> st;
      int j=0;
      for(int i=0;i<pushed.size();i++){
        st.push(pushed[i]);
         if(st.size()>0 && st.top()==popped[j]){
           while(j<popped.size() && st.size()>0 && popped[j]==st.top()){
             st.pop();
             j++;
           }
         
         }
      }
if(st.size()==0) return true;
return false;

    }
};