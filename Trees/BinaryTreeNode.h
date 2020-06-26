//Binary Tree Node Header file

template<typename T>

class BinaryTreeNode{
	public:
		T data;
		BinaryTreeNode* left;
		BinaryTreeNode* right;
		
		BinaryTreeNode(T x){
			this->data=x;
			this->left=NULL;
			this->right=NULL;
		}
		
		~BinaryTreeNode(){
			//  delete null = ignored
				delete this->left;
				delete this->right;			
		}
};
