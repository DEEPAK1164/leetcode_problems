//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList() {
    int n; // length of link list
    scanf("%d ", &n);

    char data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i) {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
/*

Definition for singly Link List Node
struct Node
{
    char data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
};

You can also use the following for printing the link list.
printList(Node* node);
*/

class Solution {
  public:
   bool isAnagram(string s1, string s2){
        if(s1.size() != s2.size()) return false;
        
        // array<int, 26> arr{};
        int arr[26];
        for(int i=0;i<26;i++)
        {
            arr[i]=0;
        }
        for(int i = 0; i < s1.size();i++) {
            arr[s1[i] - 'a']++;
            arr[s2[i] - 'a']--;
        }        
        for(auto it : arr) {
            if(it!=0)
            return false;
        }
        return true;
    }
    vector<Node*> findAnagrams(struct Node* head, string s) {
        // code here
        vector<Node*> ans;
        Node* front = head;
        Node* prev = NULL;
        while(head!=NULL)
        {
            string tempStr ;
            for(int i = 0; i < s.size(); i++){
                if(head!=NULL) {
                    tempStr.push_back(head->data);
                    prev = head;
                    head = head->next;
                }
            }
            
            if(isAnagram(tempStr,s))
            {
               prev->next = NULL;
                ans.push_back(front);
                 
            } 
            else 
            {
                head = front->next;
            }
            front = head;
        }
        
         if(head==NULL)
        {
        return ans;
        }
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        struct Node *head = inputList();

        string s;
        cin >> s;

        Solution obj;
        vector<Node *> res = obj.findAnagrams(head, s);

        for (int i = 0; i < res.size(); i++) {
            printList(res[i]);
        }

        if (res.size() == 0) cout << "-1\n";
    }
}

// } Driver Code Ends