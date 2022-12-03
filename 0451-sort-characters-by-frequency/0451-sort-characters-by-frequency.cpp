class Solution {
#define ppi pair<int,char>
//CUSTOM COMPARATOR for Heap
class Compare{
  public:
  //Override
  bool operator()(pair<int,char>below, pair<int,char> above){
    if(below.first == above.first){
      //freq same
      return below.second > above.second; //lexicographically smaller is TOP
    }
    return below.first > above.first; //less freq at TOP
  }
};
    public:
    string frequencySort(string s) {
         unordered_map<char,int> mpp;
  priority_queue<ppi,vector<ppi>,Compare> minH; // freq , character
 
  for(char ch : s){
    mpp[ch]++;
  }
 
  for(auto m : mpp){
    minH.push({m.second, m.first}); // as freq is 1st , char is 2nd
  }
 
  string ans="";
  //Now we have in the TOP - Less Freq chars
 
  while(minH.size()>0){
 
    int freq = minH.top().first;
    char ch = minH.top().second;
    for(int i=0; i<freq; i++){
      ans+=ch; // append as many times of freq
    }
    minH.pop(); //Heapify happens 
  }
 reverse(ans.begin(),ans.end());
  return ans;
    }
};