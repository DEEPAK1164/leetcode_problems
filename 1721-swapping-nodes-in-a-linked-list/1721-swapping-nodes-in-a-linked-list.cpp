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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        int ln=0;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            ln++;
            curr=curr->next;
        }
        ListNode* f=head;
        ListNode* l=head;
        
        for(int i=0;i<k-1;i++)
        {
            f=f->next;
        }
        for(int i=0;i<ln-k;i++)
        {
            l=l->next;
        }
        int x=f->val;
        int y=l->val;
        f->val=y;
        l->val=x;
        return head;
        
        
        
    }
};