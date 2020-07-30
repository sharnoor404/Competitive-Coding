/*
Given a singly linked list where elements are sorted in ascending order, 
convert it to a height balanced BST.
*/
 
TreeNode* helper(ListNode* Start,ListNode* End){
    
    if(Start==End){
        return NULL;
    }
    
    TreeNode* root=NULL;
    
    //step1: find middle element
    ListNode* slow=Start;
    ListNode* fast=Start;
    while(fast!=End && fast->next!=End){
        slow=slow->next;
        fast=fast->next;
        if(fast!=End){
            fast=fast->next;
        }
    }
    
    if(slow!=NULL){
    root=new TreeNode(slow->val);
    root->left=helper(Start,slow);
    root->right=helper(slow->next,End);
    }
    return root;
}
 
TreeNode* Solution::sortedListToBST(ListNode* A) {

    if(A==NULL){
        return NULL;
    }
    
    return helper(A,NULL);
    
}

