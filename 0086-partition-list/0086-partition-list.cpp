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
    ListNode* partition(ListNode* head, int x) {
        ListNode* curr=head;
        vector<int>v;
        while(curr!=NULL)
        {
            v.push_back(curr->val);
            curr=curr->next;
        }
        vector<int>v1,v2;
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<x)
            {
                v1.push_back(v[i]);
            }
            else 
            {
                v2.push_back(v[i]);
            }
        }
        ListNode* temp=head;
    vector<int>ans;
        for(int i=0;i<v1.size();i++)
        {
            ans.push_back(v1[i]);
        }
        for(int i=0;i<v2.size();i++)
        {
            ans.push_back(v2[i]);
        }
        int i=0;
        while(temp!=NULL)
        {
            temp->val=ans[i++];
            temp=temp->next;
        }
        return head;
    }
};