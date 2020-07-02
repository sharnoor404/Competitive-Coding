/*
Given two binary trees, write a function to check if they are equal or not.
*/

int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    if(A==NULL && B==NULL){
        return 1;
    }else if((A==NULL && B!=NULL) || (A!=NULL && B==NULL)){
        return 0;
    }
    if(A->val!=B->val){
        return 0;
    }
    return isSameTree(A->left,B->left) && isSameTree(A->right,B->right);
    
}
