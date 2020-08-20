/*
Remove loop in a linked list : GFG
*/

void removeLoop(Node* head)
{
   //detect loop
   Node* slow=head;
   Node* fast=head;
   while(slow!=NULL && fast!=NULL && fast->next!=NULL){
       slow=slow->next;
       fast=fast->next;
       if(fast!=NULL){
           fast=fast->next;
       }
       if(fast==slow){
           //loop exists
           break;
       }
   }
   
   if(slow==fast){
       int loop_length=0;
       while(fast->next!=slow){
           fast=fast->next;
           loop_length++;
       }
       loop_length++;
   
   slow=head;
   fast=head;
   while(loop_length>0){
       fast=fast->next;
       loop_length--;
   }
   
   while(fast!=slow){
       fast=fast->next;
       slow=slow->next;
   }
   //now both point to starting node of loop
   while(slow->next!=fast){
       slow=slow->next;
   }
   slow->next=NULL;
   }
}
