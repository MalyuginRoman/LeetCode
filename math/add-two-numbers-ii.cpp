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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* prev1 = nullptr;
        ListNode* curr1 = l1;
        while (curr1 != nullptr) {
            ListNode* temp = curr1->next;  // Store the next node
            curr1->next = prev1;            // Reverse the current node's pointer
            prev1 = curr1;                  // Move prev to current node
            curr1 = temp;                  // Move to the next node
        }
        ListNode* prev2 = nullptr;
        ListNode* curr2 = l2;
        while (curr2 != nullptr) {
            ListNode* temp = curr2->next;  // Store the next node
            curr2->next = prev2;            // Reverse the current node's pointer
            prev2 = curr2;                  // Move prev to current node
            curr2 = temp;                  // Move to the next node
        }
        ListNode* dummyHead = new ListNode(0);
        ListNode* tail = dummyHead;
        int carry = 0;
        while (prev1 != nullptr || prev2 != nullptr || carry != 0) {
            int digit1 = (prev1 != nullptr) ? prev1->val : 0;
            int digit2 = (prev2 != nullptr) ? prev2->val : 0;
            int sum = digit1 + digit2 + carry;
            int digit = sum % 10;
            carry = sum / 10;
            ListNode* newNode = new ListNode(digit);
            tail->next = newNode;
            tail = tail->next;
            prev1 = (prev1 != nullptr) ? prev1->next : nullptr;
            prev2 = (prev2 != nullptr) ? prev2->next : nullptr;
        }
        ListNode* val = dummyHead->next;
        delete dummyHead;
        ListNode* result = nullptr;
        ListNode* curr3 = val;
        while (curr3 != nullptr) {
            ListNode* temp = curr3->next;  // Store the next node
            curr3->next = result;            // Reverse the current node's pointer
            result = curr3;                  // Move prev to current node
            curr3 = temp;                  // Move to the next node
        }
        return result;
    }
};