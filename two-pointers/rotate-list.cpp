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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 0) return head;
        ListNode *curr = head;
        ListNode *tail = NULL;
        int n = 0, modK = 0, i = 0;
        while(curr != NULL)
        {
            n++;
            if(curr->next == NULL)
            {
                tail = curr;
                curr->next = head;
                break;
            }
            curr = curr->next;
        }
        modK = k % n;
        if(modK == 0)
        {
            tail->next = NULL;
            return head;
        }
        curr = head;
        while(i < n - modK - 1)
        {
            i++;
            curr = curr->next;
        }
        head = curr->next;
        curr->next = NULL;
        return head;
    }
};