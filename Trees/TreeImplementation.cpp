#include<iostream>
#include<queue>
# include "TreeNode.h"
using namespace std;

TreeNode<int>* takeInputLevelWise(){
	int rootData;
	cout<<"Enter root data ";
	cin>>rootData;
	TreeNode<int>* root=new TreeNode<int>(rootData);
	queue<TreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	
	while(!pendingNodes.empty()){
		TreeNode<int>* x=pendingNodes.front();
		pendingNodes.pop();
		int num;
		cout<<"Enter number of children of "<<x->data<<endl;
		cin>>num;
		
		for(int i=0;i<num;i++){
			int data;
			cout<<"Enter data"<<endl;
			cin>>data;
			TreeNode<int>* child=new TreeNode<int>(data);
			x->children.push_back(child);
			pendingNodes.push(child);
		}
		
	}
	return root;
}

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

void printTreeLevelWise(TreeNode<int>* root) {
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    
    while(!pendingNodes.empty()){
        TreeNode<int>* x=pendingNodes.front();
        pendingNodes.pop();
        cout<<x->data<<":";
        for(int i=0;i<x->children.size();i++){
            pendingNodes.push(x->children[i]);
            cout<<x->children[i]->data;
            if(i!=x->children.size()-1){
                cout<<",";
            }
        }
        cout<<endl;
    }
    
}



int main(){
	//recursive method for input
	TreeNode<int>* root=takeInput();
	//level wise input intake(better)
	TreeNode<int>* root=takeInputLevelWise();
	//printing corresponding to recursive input
	printTree(root);
	//printing Level Wise
	printTreeLevelWise(root);
	//DELETE TREE
}
