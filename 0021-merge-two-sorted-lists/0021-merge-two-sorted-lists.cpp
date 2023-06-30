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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* i=list1;
        ListNode* j=list2;
        ListNode* head=new ListNode(NULL);;
        ListNode* d=head;
        while(i!=NULL&&j!=NULL)
        {
            if(i->val<=j->val)
            {
                ListNode* temp=new ListNode(i->val);
                d->next=temp;
                d=d->next;
                i=i->next;
            }
            else
            {
                ListNode* temp=new ListNode(j->val);
                d->next=temp;
                d=d->next;
                j=j->next;
            }
        }
        while(i!=NULL)
        {
             ListNode* temp=new ListNode(i->val);
                d->next=temp;
            d=d->next;
                i=i->next;
        }
        while(j!=NULL)
        {
              ListNode* temp=new ListNode(j->val);
                d->next=temp;
            d=d->next;
                j=j->next;
        }
        return head->next;
        
    }
};