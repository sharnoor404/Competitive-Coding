/*
Given a binary tree and a sum, 
determine if the tree has a root-to-leaf path such that 
adding up all the values along the path equals the given sum.
*/
int SumHelper(TreeNode* A, int B,long long int sum){
    if(A==NULL){
        if(sum==B){
            return 1;
        }else{
            return 0;
        }
    }
    
    if(A->left==NULL && A->right==NULL){
        sum+=A->val;
        if(sum==B){
            return 1;
        }else{
            return 0;
        }
        
    }
    else if(A->left!=NULL && A->right==NULL){
        if(SumHelper(A->left,B,sum+A->val)){
            return 1;
             }else{
            return 0;
         }
    }else if(A->right!=NULL && A->left==NULL){
        if(SumHelper(A->right,B,sum+A->val)){
            return 1;
             }else{
            return 0;
         }
    }
    else if(A->left!=NULL && A->right!=NULL){
        if(SumHelper(A->left,B,sum+A->val) || SumHelper(A->right,B,sum+A->val)){
            return 1;
             }else{
            return 0;
         }
    }
}
 
int Solution::hasPathSum(TreeNode* A, int B) {
    
    return SumHelper(A,B,0);
    
}

