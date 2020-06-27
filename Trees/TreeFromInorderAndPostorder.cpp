/*
Given Postorder and Inorder traversal of a binary tree, 
create the binary tree associated with the traversals.
*/
BinaryTreeNode<int>* helper(int *postorder,int *inorder,int postorderStart,int postorderEnd,int inorderStart,int inorderEnd){
    if(postorderStart>postorderEnd || inorderStart>inorderEnd){
        return NULL;
    }
    int rootIndex=-1;
	int rootData=postorder[postorderEnd];
    for(int i=inorderStart;i<=inorderEnd;i++){
        if(inorder[i]==rootData){
            rootIndex=i;
            break;
        }
    }
    
    
    int leftPostOrderStart=postorderStart;
    int leftPostOrderEnd=leftPostOrderStart+rootIndex-inorderStart-1;
    int leftInOrderStart=inorderStart;
    int leftInOrderEnd=rootIndex-1;
    int rightPostOrderStart=leftPostOrderEnd+1;
    int rightPostOrderEnd=postorderEnd-1;
    int rightInOrderStart=rootIndex+1;
    int rightInOrderEnd=inorderEnd;
    
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
    root->left=helper(postorder,inorder,leftPostOrderStart,leftPostOrderEnd,leftInOrderStart,leftInOrderEnd);
    root->right=helper(postorder,inorder,rightPostOrderStart,rightPostOrderEnd,rightInOrderStart,rightInOrderEnd);
	
    return root;
}


BinaryTreeNode<int>* getTreeFromPostorderAndInorder(int *postorder, int postLength, int *inorder, int inLength) {
    
    return helper(postorder,inorder,0,postLength-1,0,inLength-1);

}

