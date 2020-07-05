/*
Given a binary tree A with N nodes.
Remove all the half nodes and return the final binary tree.
*/
TreeNode* Solution::solve(TreeNode* A) {
    if(A==NULL){
        return NULL;
    }
    
    if(A->left==NULL && A->right==NULL){
        return A;
    }else if(A->left!=NULL && A->right==NULL){
        return solve(A->left);
    }else if(A->left==NULL && A->right!=NULL){
        return solve(A->right);
    }else if(A->left!=NULL && A->right!=NULL){
        A->left=solve(A->left);
        A->right=solve(A->right);
        return A;
    }
    
}
