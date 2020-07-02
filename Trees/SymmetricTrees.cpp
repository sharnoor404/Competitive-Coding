/*
Given a binary tree, check whether it is a mirror of itself or not.
*/
int helper(TreeNode* leftPtr,TreeNode* rightPtr){
    if(leftPtr!=NULL && rightPtr!=NULL){
        if(leftPtr->val==rightPtr->val){
            return helper(leftPtr->left,rightPtr->right) && helper(leftPtr->right,rightPtr->left);
        }else{
            return 0;
        }
    }else if(leftPtr==NULL && rightPtr==NULL){
        return 1;
    }else{
        return 0;
    }
}
 
int Solution::isSymmetric(TreeNode* A) {
    if(A==NULL){
        return 1;
    }
    return helper(A->left,A->right);
}
