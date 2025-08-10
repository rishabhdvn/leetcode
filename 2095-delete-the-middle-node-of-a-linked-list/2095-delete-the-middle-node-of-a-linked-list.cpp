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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL) { // empty or 1 node
            return nullptr;
        }

        int n = 0;
        ListNode* current = head;
        while (current != NULL) {
            n++;
            current = current->next;
        }

        current = head;
        for (int i = 0; i < (n/2) - 1; i++) { // stop before middle
            current = current->next;
        }

        ListNode* temp = current->next;
        current->next = temp->next;
        delete temp;

        return head;
    }
};
