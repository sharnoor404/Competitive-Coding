#include<iostream>
using namespace std;
#include "BinaryTreeNode.h"
#include<queue>

void print1(BinaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<":";
	if(root->left!=NULL){
		cout<<"L"<<root->left->data;
	}
	if(root->right!=NULL){
		cout<<"R"<<root->right->data;
	}
	cout<<endl;
	print1(root->left);
	print1(root->right);
}

BinaryTreeNode<int>*  takeInput(){
	int x;
	cout<<"Enter data"<<endl;
	cin>>x;
	if(x==-1){
		return NULL;
	}
	BinaryTreeNode<int>* root=new BinaryTreeNode<int>(x);
	BinaryTreeNode<int>* leftChild=takeInput();
	BinaryTreeNode<int>* rightChild=takeInput();
	root->left=leftChild;
	root->right=rightChild;
	return root;
}


int main(){
/*
	BinaryTreeNode<int>* root=new BinaryTreeNode<int>(1);
	BinaryTreeNode<int>* node1=new BinaryTreeNode<int>(2);
	BinaryTreeNode<int>* node2=new BinaryTreeNode<int>(3);
	
	root->left=node1;
	root->right=node2;
	*/
	BinaryTreeNode<int>* root=takeInputLevelWise();
	print1(root);
}
