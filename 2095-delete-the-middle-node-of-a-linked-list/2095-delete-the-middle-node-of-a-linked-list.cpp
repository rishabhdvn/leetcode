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
        if(head==NULL || head->next==NULL){
            return nullptr;
        }
        ListNode* current=head;
        int n=0;
        while(current!=NULL){
            n++;
            current=current->next;
        }
        int target=n/2-1;
        current=head;
        for(int i=0;i<target;i++){
            current=current->next;
        }
        ListNode* temp=current->next;
        current->next=temp->next;
        delete temp;
        return head;
        
    }
};