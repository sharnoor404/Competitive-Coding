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
//approach 2: Complexity=O(n)

class BSTReturn{
	public:
		bool isBinarySearchTree;
		int maximum;
		int minimum;
};

BSTReturn isBST(BinaryTreeNode<int>* root){
	
	if(root==NULL){
		BSTReturn output;
		output.isBinarySearchTree=true;
		output.maximum=INT_MIN;
		output.minimum=INT_MAX;
		return output;
	}
	
	BSTReturn leftOutput=isBST(root->left);
	BSTReturn rightOutput=isBST(root->right);
	
	BSTReturn output;
	output.maximum=std::max(root->data,std::max(leftOutput.maximum,rightOutput.maximum));
	output.minimum=std::min(root->data,std::min(leftOutput.minimum,rightOutput.minimum));
	output.isBinarySearchTree=(root->data<maximum_left && root->data>=minimum_right && leftOutput.isBinarySearchTree && rightOutput.isBinarySearchTree);
	return output;
}

//approach 3: Complexity=O(n)

bool isBST(BinaryTreeNode<int>* root,int min=INT_MIN,int max=INT_MAX){
	if(root==NULL){
		return true;
	}
	if(root->data<min || root->data>max){
		return false;
	}
	bool ansLeft=isBST(root->left,min,root->data-1);
	bool ansRight=isBST(root->right,root->data,max);
	return ansLeft && ansRight;
}
