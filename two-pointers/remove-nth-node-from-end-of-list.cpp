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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        int i = 0;
        while (curr != nullptr)
        {
            i++;
            ListNode* temp = curr->next;  // Store the next node
            curr->next = prev;            // Reverse the current node's pointer
            prev = curr;                  // Move prev to current node
            curr = temp;                  // Move to the next node
        }
        ListNode* pr = nullptr;
        ListNode* cu = prev;
        int j = 0;
        while (cu != nullptr)
        {
            j++;
            if (j != n)
            {
                ListNode* te = cu->next;  // Сохранить следующий узел
                cu->next = pr;            // Изменить указатель на текущий узел на противоположный
                pr = cu;                  // Переместить предыдущий на текущий узел
                cu = te;                  // Перейти к следующему узлу
            }
            else
                cu = cu->next;                  // Перейти к следующему узлу
        }
        return pr;                      // New head of the reversed list
    }
};