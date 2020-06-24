/*
Given a generic tree and an integer n. 
Find and return the node with next larger element in the Tree 
i.e. find a node with value just greater than n.
*/
TreeNode<int>* nextLargerElement(TreeNode<int> *root, int n) {
    
    if(root==NULL){
        return NULL;
    }
    
    if(root->numChildren()==0){
        if(root->data>n){
             return root;
        }else{
            return NULL;
        }
       
    }
    TreeNode<int>* nextLarger=NULL;
    for(int i=0;i<root->numChildren();i++){
        TreeNode<int>* x=nextLargerElement(root->getChild(i),n);
        if(x!=NULL && x->data>n && (nextLarger==NULL || (nextLarger!=NULL && x->data<nextLarger->data))){
            nextLarger=x;
        }
    }
    if((nextLarger!=NULL && root->data>n && root->data<nextLarger->data) || (nextLarger==NULL && root->data>n)){
        nextLarger=root;
    }
	return nextLarger;
}

