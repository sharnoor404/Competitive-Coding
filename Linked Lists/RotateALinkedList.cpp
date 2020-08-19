/*
Rotate the given LL : GFG
*/

Node* rotate(Node* head, int k)
{
    Node* newHead=head;
    Node* prevToNewHead=NULL;
    while(k>0){
        prevToNewHead=newHead;
        newHead=newHead->next;
        k--;
    }
    if(newHead==NULL){
        return head;
    }
    Node* end=head;
    while(end->next!=NULL){
        end=end->next;
    }
    end->next=head;
    prevToNewHead->next=NULL;
    return newHead;
    
}

