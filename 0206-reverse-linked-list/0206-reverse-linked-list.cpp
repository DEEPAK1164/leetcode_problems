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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        ListNode* temp=NULL;
        ListNode* l=head;
        ListNode* r=head->next;
        while(r!=NULL)
        {
            l->next=temp;
            temp=l;
            l=r;
            r=r->next;
        }
        l->next=temp;
        return l;
    }
};