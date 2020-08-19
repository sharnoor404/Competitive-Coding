/*
Reverse LL in groups of K : GFG
*/

struct node *reverse (struct node *head, int k)
{ 
   struct node *prev=NULL;
   struct node *curr=head;
   struct node *nextNode=NULL;
   int count=0;
   while(curr!=NULL && count<k){
       nextNode=curr->next;
       curr->next=prev;
       prev=curr;
       curr=nextNode;
       count++;
   }
   
   if(nextNode!=NULL){
       head->next=reverse(nextNode,k);
   }
   return prev;
}
