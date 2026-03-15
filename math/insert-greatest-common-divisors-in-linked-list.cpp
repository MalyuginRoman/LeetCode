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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* node1 = head;
        ListNode* node2 = head->next;

        while (node2 != nullptr) {
            int val1 = node1->val;
            int val2 = node2->val;
            int arg = min(val1, val2);
            bool isOk = false;
            while (!isOk)
            {
                if (val1 % arg == 0 && val2 % arg == 0)
                    isOk = true;
                else
                    arg -= 1;
            }
            ListNode* node3 = new ListNode(arg);
            node1->next = node3;
            node3->next = node2;

            node1 = node2;
            node2 = node2->next;
        }
        return head;
    }
};