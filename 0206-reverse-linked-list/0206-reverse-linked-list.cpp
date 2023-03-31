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
   
    ListNode* reverseList(ListNode* head) {
      
        ListNode* curr=head;
        while(curr!=NULL)
        {
        ListNode* forw=curr->next;
            curr->next=NULL;
        addFirst(curr);
        curr=forw;
        }
        return th;
    }
};