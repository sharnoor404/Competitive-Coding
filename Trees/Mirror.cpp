/*
Mirror the given binary tree. 
That is, right child of every nodes should become left and left should become right.
*/

void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    
    if(root==NULL || (root->left==NULL && root->right==NULL)){
        return;
    }
    
    BinaryTreeNode<int>* temp=root->left;
    root->left=root->right;
    root->right=temp;
    
    mirrorBinaryTree(root->left);
    mirrorBinaryTree(root->right);

}

