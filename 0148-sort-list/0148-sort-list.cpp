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
    ListNode* sortList(ListNode* head) {
        if(head==NULL) return head;
    bool swapped;
       do{
            swapped=false;
            ListNode* current=head;
            while(current!=NULL && current->next!=NULL){
            if(current->val > current->next->val){
            int temp=current->val;
               current->val=current->next->val;
               current->next->val=temp;
                swapped=true;  
            }
            current=current->next;
            }
        }
        while(swapped);
        return head;   
        
    }
};