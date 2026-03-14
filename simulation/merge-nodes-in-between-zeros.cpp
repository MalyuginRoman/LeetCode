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
    ListNode* mergeNodes(ListNode* head) {
        int sum = 0;
        ListNode* dummyHead = new ListNode(0);
        ListNode* tail = dummyHead;
        bool start = false;
        while (head != nullptr) {
            int val = (head != nullptr) ? head->val : 0;
            if (val != 0)
            {
                sum += val;
                start = true;
            }
            else if (start)
            {
                ListNode* newNode = new ListNode(sum);
                tail->next = newNode;
                tail = tail->next;
                sum = 0;
            }
            head = (head != nullptr) ? head->next : nullptr;
        }
        ListNode* result = dummyHead->next;
        delete dummyHead;
        return result;
    }
};