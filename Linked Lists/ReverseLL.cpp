/*
Reverse Linked List : GFG
*/

struct Node* reverseList(struct Node *head)
{
    struct Node *prev= NULL;
    struct Node *curr=head;
    struct Node *next_node;
    if(curr!=NULL){
        next_node=curr->next;
    }
    
    while(curr!=NULL){
        curr->next=prev;
        prev=curr;
        curr=next_node;
        if(next_node!=NULL){
            next_node=next_node->next;
        }
        
    }
   return prev; 
}

