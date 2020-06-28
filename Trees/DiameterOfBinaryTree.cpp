/*
Write a program to find the diameter of a binary tree.
*/

//approach-1

int height(BinaryTreeNode<int>* root){
	if(root==NULL){
		return 0;
	}
	return std::max(height(root->left),height(root->right))+1;
}

int findDiameter(BinaryTreeNode<int>* root){
	if(root==NULL){
		return 0;
	}
	int a=height(root->left)+height(root->right);
	int b=findDiameter(root->left);
	int c=findDiamer(root->right);
	
	return std::max(a,std::max(b,c));
}
