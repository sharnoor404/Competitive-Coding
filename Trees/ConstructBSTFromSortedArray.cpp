/*
Construct BST from sorted array
*/
BinaryTreeNode<int>* helper(int *input, int n,int start,int end){
    if(start>end){
        return NULL;
    }
    int midIndex=start+(end-start)/2;
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(input[midIndex]);
    root->left=helper(input,n,start,midIndex-1);
    root->right=helper(input,n,midIndex+1,end);
    return root;
}

BinaryTreeNode<int>* constructTree(int *input, int n) {
    
    return helper(input,n,0,n-1);

}
