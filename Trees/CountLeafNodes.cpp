/*
Given a generic tree, count and return the number of leaf nodes present in the given tree.
*/
int numLeafNodes(TreeNode<int>* root) {
    if(root==NULL){
        return 0;
    }
    if(root->children.size()==0){
        return 1;
    }
    int ans=0;
    
    for(int i=0;i<root->children.size();i++){
        ans+=numLeafNodes(root->children[i]);
    }
	
    return ans;
}

