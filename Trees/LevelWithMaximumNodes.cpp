/*
Given a generic tree, return the level number, 
which is having maximum number of nodes(root is level 0).
*/

#include<queue>
int maxLevel(TreeNode<int> *root){
	if(root==NULL){
    return 0;
    }
    int level=0;
    int nodes=0;
    int finalLevel=0;
    int finalnodes=1;//including the root node
    
	queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    pendingNodes.push(NULL);
    
    while(pendingNodes.size()!=0){
    	if(pendingNodes.front()==NULL){
        	level++;
            pendingNodes.pop();
        	if(pendingNodes.size()!=0){
        		pendingNodes.push(NULL);
        	}
        	
        	if(nodes>finalnodes){
        		finalnodes=nodes;
        		finalLevel=level;
        	}
            nodes=0;
            if(pendingNodes.size()==0){
            	break;
            }
        }
        
        	TreeNode<int>* x=pendingNodes.front();
            pendingNodes.pop();
            
        
    	for(int i=0;i<x->numChildren();i++){
    		pendingNodes.push(x->getChild(i));
            nodes++;
    	}
    }
    
return finalLevel;

}

