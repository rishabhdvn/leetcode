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
        vector<int> vals;
        ListNode* current=head;
        while(current!=NULL){
            vals.push_back(current->val);
            current=current->next;
        }
        vector<int> temp(vals);
        int count=k;
        int n=vals.size();
        for(int i=0;i<vals.size();i++){
            vals[(i+k)%n]=temp[i];
        }
        ListNode dummy;
        ListNode* tail=&dummy;
        for(int val : vals){
            tail->next=new ListNode(val);
            tail=tail->next;
        }
        return dummy.next;
        
    }
};