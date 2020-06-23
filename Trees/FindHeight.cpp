/*
Given a generic tree, find and return the height of given tree.
*/
int height(TreeNode<int>* root) {
    
  	if(root==NULL){
        return 0;
    }
    int max_height=0;
    for(int i=0;i<root->children.size();i++){
    	int h=height(root->children[i]);
        if(h>max_height){
           max_height=h;
       } 
    }
        return max_height+1;

}
