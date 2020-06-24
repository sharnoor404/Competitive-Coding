/*
Given a tree, find and return the node for which sum of data of all its immediate children and the node itself is maximum. 
*/
int maxSum=0;
TreeNode<int>* x=NULL;
TreeNode<int>* maxSumNode(TreeNode<int> *root){
    if(root==NULL){
        return NULL;
    }
    if(root->numChildren()==0){
        if(root->data>maxSum){
            maxSum=root->data;
            return root;
        }else{
            return NULL;
        }
    }
    
    int Sum=root->data;
    
    for(int i=0;i<root->numChildren();i++){
        Sum+=root->getChild(i)->data;
    }
    
    for(int i=0;i<root->numChildren();i++){
       TreeNode<int>* temp=maxSumNode(root->getChild(i));
        if(Sum>maxSum){
            maxSum=Sum;
            x=root;
        }
    }
	return x;
}

