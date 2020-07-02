/*
Given a binary tree, determine if it is height-balanced or not.
*/
int computeHeight(TreeNode* A){
    if(A==NULL){
        return 0;
    }
    return std::max(computeHeight(A->left),computeHeight(A->right))+1;
} 

int Solution::isBalanced(TreeNode* A) {
    if(A==NULL){
        return 1;
    }
    int leftHeight=computeHeight(A->left);
    int rightHeight=computeHeight(A->right);
    if(abs(leftHeight-rightHeight)>1){
        return 0;
    }
    return isBalanced(A->left) && isBalanced(A->right);
}
