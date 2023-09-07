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
    ListNode* reverseBetween(ListNode* head, int left, int right)
    {
      ListNode* dummy = new ListNode(0);
dummy->next = head;

        
        ListNode* p=dummy;
        ListNode* c=head;
        for(int i=0;i<left-1;i++)
        {
            p=p->next;
            c=c->next;
        }
        ListNode* sh=c;
        ListNode* pp=NULL;
        for(int i=0;i<right-left+1;i++)
        {
            ListNode* n=c->next;
            c->next=pp;
            pp=c;
            c=n; 
        }
        p->next=pp;
        sh->next=c;
        return dummy->next;
    
    }
};