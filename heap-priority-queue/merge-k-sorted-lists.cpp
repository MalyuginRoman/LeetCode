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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector <int> v1;
        for(int i=0; i<lists.size(); i++)
        {
            ListNode* temp = lists[i];
            while(temp!=nullptr)
            {
                v1.push_back(temp->val);
                temp = temp->next;
            }
        }
        if(v1.size() == 0)
        {
            ListNode* current = nullptr;
            return current;
        }
        sort(v1.begin(),v1.end());
        ListNode* result = new ListNode(v1[0]);
        ListNode* current = result;
        int j = 1;
        while(j < v1.size())
        {
            current->next = new ListNode(v1[j]);
            current = current->next;
            j++;
        }
        return result;
    }
};