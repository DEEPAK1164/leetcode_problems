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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>v;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int l=0;
        int r=0;
        for(int i=1;i<left;i++)
        {
            l++;
        }
        
        for(int j=1;j<right;j++)
        {
            r++;
        }
        while(l<r)
        {
            swap(v[l++],v[r--]);
        }
        int id=0;
        ListNode* p=head;
        while(p!=NULL)
        {
            p->val=v[id++];
            p=p->next;
        }
        return head;
        
        
    }
};