/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
     ListNode* th=NULL;
    ListNode* tt=NULL;
    void addFirst(ListNode* node)
    {
        if(th==NULL)
        {
            th=node;
            tt=node; 
        }
        else
        {
            node->next=th;
            th=node;
        }
    }
    int length(ListNode* node)
    {
        ListNode* curr=node;
        int ln=0;
        while(curr!=NULL)
        {
            curr=curr->next;
            ln++;
        }
        return ln;
    }
   
    ListNode* reverseKGroup(ListNode* head, int k)
    {
        int len=length(head);
        ListNode* curr=head;
        ListNode* oh=NULL;
        ListNode* ot=NULL;
        if(head==NULL||head->next==NULL||k==0)
        {
            return head;
        }
        while(len>=k)
        {
            int temp=k;
            while(temp--)
            {
                ListNode* forw=curr->next;
                curr->next=NULL;
                addFirst(curr);
                curr=forw;
            }
            if(oh==NULL)
            {
                oh=th;
                ot=tt;
            }
            else
            {
                ot->next=th;
                ot=tt;
            }
            th=NULL;
            tt=NULL;
            len-=k;
            
            
            
        }
         ot->next=curr;
         return oh;
    }
   
};