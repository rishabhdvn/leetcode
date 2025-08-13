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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1) return head;
        ListNode* check=head;
        for(int i=0;i<k;i++){
            if(!check) return head;
            check=check->next;
        }
        ListNode* current=head;
        ListNode* prev=NULL;
        ListNode* front=NULL;
        int count=k;
        while(current!=NULL && count>0){
            front=current->next;
            current->next=prev;
            prev=current;
            current=front; 
            count--;  
        }
        head->next=reverseKGroup(current,k);

        return prev;  
    }
};