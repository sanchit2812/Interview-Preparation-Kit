/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    
    if(!head) return false;
    Node* x = head;
    Node* y = head->next;
    
    while(x!=y){
        if(y==NULL || y->next ==NULL ) return false;
        
        x = x->next;
        y = y->next->next;
    }
    
    return true;
}
