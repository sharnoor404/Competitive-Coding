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


BinaryTreeNode<int>* takeInputLevelWise(){
	int x;
	cout<<"Enter data"<<endl;
	cin>>x;
	if(x==-1){
		return NULL;
	}
	BinaryTreeNode<int>* root=new BinaryTreeNode<int>(x);
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	
	while(!pendingNodes.empty()){
		BinaryTreeNode<int>* front=pendingNodes.front();
		pendingNodes.pop();
		cout<<"Enter left child of "<<front->data<<endl;
		int leftData;
		cin>>leftData;
		BinaryTreeNode<int>* leftChild;
		if(leftData!=-1){
			leftChild=new BinaryTreeNode<int>(leftData);
			front->left=leftChild;
			pendingNodes.push(leftChild);
		}
		
		cout<<"Enter right child of "<<front->data<<endl;
		int rightData;
		cin>>rightData;
		BinaryTreeNode<int>* rightChild;
		if(rightData!=-1){
			rightChild=new BinaryTreeNode<int>(rightData);
			front->right=rightChild;
			pendingNodes.push(rightChild);
		}
			
	}
	return root;
}

void printLevelWise(BinaryTreeNode<int> *root) {
    
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
    
    BinaryTreeNode<int> *front=pendingNodes.front();
    pendingNodes.pop();
    cout<<front->data<<":";
    if(front->left==NULL){
        cout<<"L:"<<"-1,";
    }else{
        cout<<"L:"<<front->left->data<<",";
        pendingNodes.push(front->left);
    }
        
    
    if(front->right==NULL){
        cout<<"R:"<<"-1";
    }else{
        cout<<"R:"<<front->right->data; 
        pendingNodes.push(front->right);
    }
    cout<<endl;
      
    }
    

}

int countNodes(BinaryTreeNode<int> *root){
	if(root==NULL){
		return 0;
	}
	
	return countNodes(root->left) + countNodes(root->right) +1;
}

void postOrder(BinaryTreeNode<int> *root) {
 	if(root==NULL){
    	 return;
 	}
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
    
}
void preOrder(BinaryTreeNode<int> *root) {
    if(root==NULL){
        return;
    }
    
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}

void inOrder(BinaryTreeNode<int> *root) {
    if(root==NULL){
        return;
    }
    
    preOrder(root->left);
    cout<<root->data<<" ";
    preOrder(root->right);

}

int height(BinaryTreeNode<int> *root) {
    if(root==NULL){
        return 0;
    }
    return std::max(height(root->left),height(root->right))+1;

}


int main(){

	BinaryTreeNode<int>* root=takeInputLevelWise();
	printLevelWise(root);
	cout<<"num of nodes= "<<countNodes(root);
	delete root;

}
