/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        bool ok=false;
        ListNode* slow=head;
       ListNode* fast=head;
        while(fast&&fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)
            {
                ok=true;
                break;
             }
        }
        if(ok==false)
            return NULL;
        else
        {
            while(head!=fast)
            {
                head=head->next;
                fast=fast->next;
            }
            return head;
            
            
        }
        
    }
};