/*
Write a program to find the diameter of a binary tree.
*/

//approach-1
//complexity=O(n*h)

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

//approach-2
//complexity-O(n)

template<typename T>
class pair{
	T height;
	T diameter;
};

pair<int,int> findDiameter(BinaryTreeNode<int>* root){
	
	if(root==NULL){
		pair<int,int> p;
		p.height=0;
		p.diameter=0;
		return p;
	}
	
	pair<int,int> p1=findDiameter(root->left);
	pair<int,int> p2=findDiameter(root->right);
	int max_height=std::max(p1.height,p2.height)+1;
	int max_dia=std::max(max_height-1,std::max(p1.diameter,p2.diameter));
	pair<int,int> ans;
	ans.height=max_height;
	ans.diameter=max_dia;
	return ans;
	
}













