/*
Find middle element of a LL
*/

int getMiddle(Node *head)
{
   Node *slow=head;
   Node *fast=head;
   while(fast!=NULL && fast->next!=NULL){
       slow=slow->next;
       fast=fast->next;
       if(fast!=NULL){
           fast=fast->next;
       }
   }
   return slow->data;
}

