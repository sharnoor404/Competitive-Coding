#include<unordered_map>

void helper(BinaryTreeNode<int>* root,int key,unordered_map<int,vector<int>>& ourmap){
    if(root==NULL){
        return;
    }
    
    ourmap[key].push_back(root->data);
    //traverse left
    helper(root->left,key-1,ourmap);
    //traverse right
    helper(root->right,key+1,ourmap);
    
}

void printBinaryTreeVerticalOrder(BinaryTreeNode<int>* root) {	 
		unordered_map<int,vector<int>> ourmap;
		int key=0;
        
        helper(root,key,ourmap);
    	unordered_map<int,vector<int>>:: iterator it=ourmap.begin();
    	while(it!=ourmap.end()){
            for(int i=0;i<it->second.size();i++){
                cout<<it->second[i]<<" ";
            }
            cout<<endl;
            it++;
        }
}
