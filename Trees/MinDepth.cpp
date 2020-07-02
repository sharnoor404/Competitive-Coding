/*
Given a binary tree, find shortest path from root to leaf.
*/
int Solution::minDepth(TreeNode* A) {
    
     if(A==NULL){
        return 0;
    }
    
    if(A->left==NULL && A->right==NULL){
            return 1;
        }else if(A->right==NULL && A->left!=NULL){
            return minDepth(A->left)+1;
        }else if(A->left==NULL && A->right!=NULL){
            return minDepth(A->right)+1;
        }else if(A->right!=NULL && A->left!=NULL){
            return std::min(minDepth(A->left),minDepth(A->right))+1;
        }
    
}
