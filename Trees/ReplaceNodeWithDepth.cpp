/*
In a given Generic Tree, replace each node with its depth value by updating the data of each node.
*/
void helper(TreeNode<int> *root,int level){
    if(root==NULL){
        return;
    }
    root->data=level;
    for(int i=0;i<root->numChildren();i++){
        helper(root->getChild(i),level+1);
    }
    
}
void replaceWithDepthValue(TreeNode<int> *root){    
    helper(root,0);	
}


