//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++
void rev(string& s,int i,int j)
{
    if(i>=j)
    return;
    swap(s[i],s[j]);
    rev(s,i+1,j-1);
}

    


string reverseWord(string str){
    
    rev(str,0,str.size()-1);
    return str;
  //Your code here
}

