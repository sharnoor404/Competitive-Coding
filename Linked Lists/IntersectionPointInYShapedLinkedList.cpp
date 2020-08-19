/*
Intersection point in Y shaped Linked List : GFG
*/
int intersectPoint(Node* head1, Node* head2)
{
    int length_of_LL1=0;
    int length_of_LL2=0;
    Node *temp1=head1;
    Node *temp2=head2;
    while(temp1!=NULL){
        temp1=temp1->next;
        length_of_LL1++;
    }
    while(temp2!=NULL){
        temp2=temp2->next;
        length_of_LL2++;
    }
    int jumps=0;
    if(length_of_LL1>length_of_LL2){
        jumps=length_of_LL1-length_of_LL2;
        while(jumps>0){
            head1=head1->next;
            jumps--;
        }
    }else if(length_of_LL1<length_of_LL2){
        jumps=length_of_LL2-length_of_LL1;
        while(jumps>0){
            head2=head2->next;
            jumps--;
        }
    }
    while(head1!=NULL && head2!=NULL){
        if(head1==head2){
            return head1->data;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return -1;
}

