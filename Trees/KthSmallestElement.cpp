/*
Given a binary search tree, find the kth smallest element in the tree.
*/
void helper(TreeNode* A,int B,int &count,int &ans){
   
   if(A==NULL){
       return;
   }
   
    helper(A->left,B,count,ans);
    count++;
    if(count==B){
        ans=A->val;
    }
    helper(A->right,B,count,ans);
    
}

int Solution::kthsmallest(TreeNode* A, int B) {
   int ans=0;
   int count=0;
   helper(A,B,count,ans);
   return ans;
}

