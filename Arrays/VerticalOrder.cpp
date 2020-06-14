/*
Given a binary tree, print that binary tree in vertical order.
*/
#include<unordered_map>
#include<vector>
 void print(BinaryTreeNode<int> *root, int order, unordered_map<int,vector<int>> &ourmap)
    {
     if(root==NULL){
         return;
     }
     ourmap[order].push_back(root->data);
        print(root->left,order-1,ourmap);
        print(root->right,order+1,ourmap);
    }
	void printBinaryTreeVerticalOrder(BinaryTreeNode<int>* root) {	 
     	unordered_map<int,vector<int>> ourmap;
        int order=0;
        print(root,order,ourmap);
        
     	unordered_map<int,vector<int>> :: iterator it=ourmap.begin();
     while(it!=ourmap.end()){
       //  int k=it->second.size();
         for(int i=0;i<it->second.size();i++){
             cout<<it->second[i]<<" ";
         }
         cout<<endl;
         it++;
     }	
 	}


