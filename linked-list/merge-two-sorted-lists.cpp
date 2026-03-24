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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* tail = dummyHead;

        while (list1 != nullptr || list2 != nullptr) {
            int num1 = (list1 != nullptr) ? list1->val : 101;
            int num2 = (list2 != nullptr) ? list2->val : 101;

            int val;
            if (num1 <= num2)
            {
                val = num1;
                list1 = (list1 != nullptr) ? list1->next : nullptr;
            }
            else
            {
                val = num2;
                list2 = (list2 != nullptr) ? list2->next : nullptr;
            }

            ListNode* newNode = new ListNode(val);
            tail->next = newNode;
            tail = tail->next;
        }

        ListNode* result = dummyHead->next;
        delete dummyHead;
        return result;
    }
};