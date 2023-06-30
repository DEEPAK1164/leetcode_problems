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
    ListNode* deleteMiddle(ListNode* head) {
        
        ListNode* temp=head;
        int ct=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            ct++;
        }
        if(head==NULL||head->next==NULL)
        {
            return NULL;
        }
        if(head->next->next==NULL)
        {
            head->next=NULL;
            return head;
        }
        
        int n=ct/2;
        ListNode* l=head;
           ListNode* m=l->next;
        ListNode* r=m->next;
        for(int i=1;i<=n-1;i++)
        {
            l=l->next;
            m=m->next;
            r=r->next;
        }
        m->next=NULL;
        l->next=r;
        return head;
        
    }
};