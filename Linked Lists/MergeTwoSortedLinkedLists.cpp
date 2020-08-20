/*
Merge two sorted linked list : GFG
*/

Node* sortedMerge(Node* head_A, Node* head_B)  
{  
    
    if(head_A==NULL){
        return head_B;
    }else if(head_B==NULL){
        return head_A;
    }else{
        Node* result;
        if(head_A->data<head_B->data){
            result=head_A;
            result->next=sortedMerge(head_A->next,head_B);
        }else{
            result=head_B;
            result->next=sortedMerge(head_A,head_B->next);
        }
        return result;
    }
}  
