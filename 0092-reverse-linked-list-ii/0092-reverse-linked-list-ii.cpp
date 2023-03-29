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
        ListNode* curr=head;
        while(curr!=NULL)
        {
            v.push_back(curr->val);
            curr=curr->next;
            
        }
        int l=left-1;
        int r=right-1;
        while(l<r)
        {
            swap(v[l],v[r]);
            l++;
            r--;
        }
        curr=head;
       reverse(v.begin(),v.end());
        while(curr!=NULL)
        {
            curr->val=v.back();
            v.pop_back();
            curr=curr->next;
        }
        
        return head;
    }
};