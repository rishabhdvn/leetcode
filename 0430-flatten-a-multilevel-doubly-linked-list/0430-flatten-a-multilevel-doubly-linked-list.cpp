/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node dummy;
        Node* tail=&dummy;
        stack<Node*> st;
        Node* current=head;
        if(head==NULL) return head;
        while(current!=NULL || !st.empty()){
            if(!current){
            current=st.top();
            st.pop();
            }
            tail->next=current;
            current->prev=tail;
            tail=current;
            if(current->child){
                if(current->next)st.push(current->next);
                current=current->child;
                tail->child=NULL;
            }
            else{
                current=current->next;
            }
        }
        dummy.next->prev=NULL;
        return dummy.next;
    }
};