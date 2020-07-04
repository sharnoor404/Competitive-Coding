/*
Given a binary tree, print all the diagonal elements 
in a binary tree belonging to same line with slope equal to -1.
*/
#include<queue>
void PrintDiagonal(BinaryTreeNode<int>* root) {
	queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    pendingNodes.push(NULL);
    
    while(pendingNodes.size()!=0){
        BinaryTreeNode<int>* x=pendingNodes.front();
        pendingNodes.pop();
        while(x!=NULL){
            cout<<x->data<<" ";
            if(x->left!=NULL){
                pendingNodes.push(x->left);
            }
            x=x->right;
        }
        if(pendingNodes.front()==NULL){
            pendingNodes.pop();
            cout<<endl;
            if(pendingNodes.size()!=0){
                pendingNodes.push(NULL);
            }else{
                break;
            }
        }
    }
}
        
