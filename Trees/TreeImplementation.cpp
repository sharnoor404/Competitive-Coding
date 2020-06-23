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

int countNode(TreeNode<int>* root){
	int ans=1;
	for(int i=0;i<root->children.size();i++){
		ans+=countNode(root->children[i]);
	}
	return ans;
}

int sumOfNodes(TreeNode<int>* root) {
    
    int ans=root->data;
    for(int i=0;i<root->children.size();i++){
        ans+=sumOfNodes(root->children[i]);
    }
    return ans;
    
}

TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    if(root==NULL){
        return NULL;
    }
   TreeNode<int>* maxNode=root;
    for(int i=0;i<root->children.size();i++){
        TreeNode<int>* x=maxDataNode(root->children[i]);
        if(x->data>maxNode->data){
            maxNode=x;
        }
    }
    return maxNode;

}

void printAtLevelK(TreeNode<int>* root,int K){
	if(root==NULL){
		return;
	}
	if(K==0){
		cout<<root->data<<" ";
		return;
	}
	
	for(int i=0;i<root->children.size();i++){
		printAtLevelK(root->children[i],K-1);
	}
}

void postOrder(TreeNode<int>* root) {
    
    if(root==NULL){
        return;
    }
    
    for(int i=0;i<root->children.size();i++){
        postOrder(root->children[i]);
    }
    cout<<root->data<<" ";

}

void deleteTree(TreeNode<int>*root){
		if(root==NULL){
			return;
		}
		for(int i=0;i<root->children.size();i++){
			deleteTree(root->children[i]);
		}
		delete root;
	}

int main(){
	/*recursive method for input
	TreeNode<int>* root=takeInput();*/
	
	//level wise input intake(better)
	TreeNode<int>* root=takeInputLevelWise();
	
	/*printing corresponding to recursive input
	printTree(root);*/
	
	//printing Level Wise
	printTreeLevelWise(root);
	
	//count Number of Nodes
	cout<<"Number of Nodes in the tree = "<<countNode(root);
	
	//sum of the tree nodes
	cout<<"Number of Nodes in the tree = "<<sumOfNodes(root);
	
	TreeNode<int>* max=maxDataNode(root);
	cout<<"Max Data Node = "<<max->data<<endl;
	
	//print nodes at level K
	printAtLevelK(root,3);
	
	//postOrderTraversal
	postOrder(root);
	
	//DELETE TREE
	
	//Method 1:using function
	deleteTree(root);
	
	//Method 2: using destructor
	delete root;
	
}
