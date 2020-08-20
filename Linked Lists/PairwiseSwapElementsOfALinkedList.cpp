/*
Pairwise swap elements of a linked list : GFG
*/
Node* pairWiseSwap(struct Node* head) {
   if(head==NULL || head->next==NULL){
       return head;
   }
   
   Node *curr=head->next;
   Node *prev=head;
   Node *next_node=curr->next;
   curr->next=prev;
   prev->next=pairWiseSwap(next_node);
   return curr;
}
