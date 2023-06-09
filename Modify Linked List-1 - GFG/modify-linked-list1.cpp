//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/

class Solution{
    public:
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
        vector<int>v,v1;
        Node* temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->data);
            temp=temp->next;
        }
           int n=v.size();
           int i=0;
           int j=v.size()-1;
           while(i<j)
           {
               v1.push_back(v[j]-v[i]);
               j--;
               i++;
           }
           int sz=v1.size();
             Node* p=head;
              int pos=0;
           while(sz--)
           {
               p->data=v1[pos++];
               p=p->next;
           }
          
           if(n%2==1)
           {
               
          
           while(p!=NULL)
           {
               p->data=v[pos--];
               p=p->next;
           }
           }
           else
           {
                 pos--; 
          
           while(p!=NULL)
           {
               p->data=v[pos--];
               p=p->next;
           }
           }
           return head;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends