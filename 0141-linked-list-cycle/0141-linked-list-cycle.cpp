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
    bool hasCycle(ListNode *head) 
    {
        ListNode* dummy=new ListNode;
        ListNode* curr=head;
        bool ok=false;
        while(curr!=NULL)
        {
           
            if(curr->next==dummy)
            {
                ok= true;
                break;
            }
            ListNode* temp=curr->next;
            curr->next=dummy;
            curr=temp;  
        }
          if(ok)
              return true;
        return false;
    }
};