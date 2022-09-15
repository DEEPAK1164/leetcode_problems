class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) return NULL;
        ListNode* node = head;
        while (node->next) {
            if (node->next->val == val)
                node->next = node->next->next;
            else
                node = node->next;
        }
        return head->val == val ? head->next : head;
    }
};