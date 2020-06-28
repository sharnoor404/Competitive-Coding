/*
Given a binary tree, write code to create a separate linked list for each level. 
Return the array which contains head of each level linked list.
*/
#include<queue>
#include<vector>
vector<node<int>*> createLLForEachLevel(BinaryTreeNode<int> *root) {
    
    vector<node<int>*> result;
    
    node<int>* head=NULL;
    node<int>* tail=NULL;
    
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    pendingNodes.push(NULL);
    
    while(!pendingNodes.empty()){
        
        BinaryTreeNode<int> * front=pendingNodes.front(); 
        pendingNodes.pop();
        
        if(front!=NULL){
            
            if(front->left!=NULL){
            	 pendingNodes.push(front->left);
        	}
        	if(front->right!=NULL){
           		 pendingNodes.push(front->right);
       		 }
            
            node<int>* n=new node<int>(front->data);
            
        	if(head==NULL){
                head=n;
                tail=n;
            }else{
                tail->next=n;
                tail=tail->next;
            }
        }else{
            if(!pendingNodes.empty()){
                pendingNodes.push(NULL);
            }
        	result.push_back(head);
            head=NULL;
            tail=NULL;
            
        }
    }
return result;
}

