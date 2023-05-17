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
    int pairSum(ListNode* head) {
        ListNode* p=head;
        vector<int>v;
        while(p!=NULL)
        {
            v.push_back(p->val);
            p=p->next;
        }
        int i=0;
        int j=v.size()-1;
        int sm=INT_MIN;
        while(i<j)
        {
            sm=max(sm,v[i++]+v[j--]);
        }
        return sm;
    }
};