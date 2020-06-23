#include<vector>
using namespace std;

template<typename T>

class TreeNode{
	public:
		
	T data;
	vector<TreeNode*> children;
	
	TreeNode(T val){
		this->data=val;
	}
	/* Method 2 of deletion:
	When delete root is called, it first performs whatever code 
	the destructor holds and then deletes the root
	Almost parallel to post order delete, deletes children first and then calls delete on itself*/
	~TreeNode(){
		for(int i=0;i<this->children.size();i++){
			delete children[i];
		}
	}
	
};
