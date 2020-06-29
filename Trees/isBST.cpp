/*
Check if the given binary tree is BST or not.
*/
//approach 1: Complexity=O(nh)
int findMaximum(BinaryTreeNode<int>* root){
	if(root==NULL){
		return INT_MIN;
	}
	return std::max(root->data,std::max(findMaximum(root->left),findMaximum(root->right)));
}

int findMinimum(BinaryTreeNode<int>* root){
	if(root==NULL){
		return INT_MAX;
	}
	return std::min(root->data,std::min(findMinimum(root->left),findMiniimum(root->right)));
}

bool isBST(BinaryTreeNode<int>* root){
	if(root==NULL){
		return true;
	}
	int leftMax=findMaximum(root->left);
	int rightMin=findMinimum(root->right);
	
	bool ans=(root->data>leftMin) && (root->data<=rightMin) && isBST(root->left) && isBST(root->right);
	return ans;
}

