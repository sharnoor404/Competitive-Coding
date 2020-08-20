/*
Nth node from end of Linked List : GFG
*/

int getNthFromLast(Node *head, int n)
{
    Node *end=head;
      while(n>0 && end!=NULL){
         end=end->next;
         n--;
      }
      
      if(n==0 && end==NULL){
          //end case
          return head->data;
      }else if(n!=0 && end==NULL){
          //n>length of linked list
          return -1;
      }
      
      Node *start=head;
      while(end!=NULL){
          end=end->next;
          start=start->next;
      }
      return start->data;
}


