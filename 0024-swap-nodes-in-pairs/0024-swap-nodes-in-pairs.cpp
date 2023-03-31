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
    ListNode* swapPairs(ListNode* head)
    {
          
        if(head==NULL||head->next==NULL)
            return head;
         ListNode* curr=head;
        ListNode* forw=curr->next;
       
        while(forw->next!=NULL&&forw->next->next!=NULL)
        {
            int c=curr->val;
            int f=forw->val;
            curr->val=f;
            forw->val=c;
            forw=forw->next->next;
            curr=curr->next->next;
        }
        
            int c=curr->val;
            int f=forw->val;
            curr->val=f;
            forw->val=c;
        
        return head;
    }
};