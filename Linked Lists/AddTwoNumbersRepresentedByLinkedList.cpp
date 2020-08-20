/*
Add two numbers represented by linked lists : GFG
*/
struct Node* reverseLL(struct Node* x){
    if(x==NULL){
        return NULL;
    }
    Node* curr=x;
    Node* prev=NULL;
    Node* next_node=curr->next;
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

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    // reverse both the numbers

    first=reverseLL(first);
    second=reverseLL(second);
    struct Node* newHead=first;
    int carry=0;
    struct Node* prev=NULL;
    while(first!=NULL && second!=NULL){
        prev=first;
        first->data=first->data+second->data+carry;
        carry=first->data/10;
        first->data=first->data%10;
        first=first->next;
        second=second->next;
    }
    if(first==NULL && second!=NULL){
        while(second!=NULL){
            prev->next=second;
            prev=prev->next;
            prev->data=prev->data+carry;
            carry=prev->data/10;
            prev->data=prev->data%10;
            second=second->next;
        }
    }else if(second==NULL && first!=NULL){
        while(first!=NULL){
            prev->next=first;
            prev=prev->next;
            prev->data=prev->data+carry;
            carry=prev->data/10;
            prev->data=prev->data%10;
            first=first->next;
        }
    }
    
    if(carry==1){
        prev->next=new Node(1);
    }
    newHead=reverseLL(newHead);
    return newHead;
}

