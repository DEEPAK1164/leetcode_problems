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
        ListNode* temp=head;
        vector<int>v;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        reverse(v.begin(),v.end());
        ListNode* p=head;
        int i=0;
        while(p!=NULL)
        {
            p->val=v[i++];
            p=p->next;
        }
        
        return head;
    }
};