/*
Given Preorder and Inorder traversal of a binary tree, 
create the binary tree associated with the traversals.
*/

BinaryTreeNode<int>* helper(int *preorder,int *inorder,int preS,int preE,int inS,int inE){
    
    if(preS>preE || inS>inE){
        return NULL;
    }
    int rootData=preorder[preS];
    int rootIndex=-1;
    for(int i=inS;i<=inE;i++){
        if(inorder[i]==rootData){
            rootIndex=i;
            break;
        }
    } 
        int linS=inS;
        int linE=rootIndex-1;
    	int lpreS=preS+1;
        int lpreE=lpreS+rootIndex-linS-1;
    	int rinS=rootIndex+1;
        int rinE=inE;
    	int rpreS=lpreE+1;
        int rpreE=preE;
    
        BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
        root->left=helper(preorder,inorder,lpreS,lpreE,linS,linE);
        root->right=helper(preorder,inorder,rpreS,rpreE,rinS,rinE);
        
     return root;
}

BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    
    return helper(preorder,inorder,0,preLength-1,0,inLength-1);
}

