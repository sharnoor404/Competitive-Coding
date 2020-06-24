/*
Given a generic tree, 
find and return the node with second largest value in given tree. 
Return NULL if no node with required value is present.
*/
TreeNode <int>* max1=NULL;
TreeNode <int>* max2=NULL;
TreeNode <int>* secondLargest(TreeNode<int> *root) {
    
    if(root==NULL){
        return NULL;
    }
    
    if(max1==NULL){
        max1=root;
    }else if(root->data>max1->data){
        max2=max1;
        max1=root;
    }else if(root->data<max1->data){
        if(max2==NULL){
            max2=root;
        }
        else if(root->data>max2->data){
            max2=root;
        }
    }
    for(int i=0;i<root->numChildren();i++){
        secondLargest(root->getChild(i));
    }
    return max2;

}

