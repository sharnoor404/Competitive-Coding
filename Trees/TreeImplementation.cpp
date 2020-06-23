#include<iostream>
# include "TreeNode.h"
using namespace std;

TreeNode<int>* takeInput(){
	int rootData,num;
	cout<<"Enter data ";
	cin>>rootData;
	TreeNode<int>* root=new TreeNode<int>(rootData);
	cout<<"Enter Number of children of "<<rootData<<endl;
	cin>>num;
	for(int i=0;i<num;i++){
		TreeNode<int>* child=takeInput();
		root->children.push_back(child);
			}
	return root;
}

void printTree(TreeNode<int>* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<":";
	for(int i=0;i<root->children.size();i++){
		cout<<root->children[i]->data<<",";
	}
	cout<<endl;
	for(int i=0;i<root->children.size();i++){
		printTree(root->children[i]);
	}	
}

int main(){
	TreeNode<int>* root=takeInput();
	printTree(root);
	//DELETE TREE
}
