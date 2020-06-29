/*
Given a binary tree, return the longest path from leaf to root. 
Longest means, a path which contain maximum number of nodes from leaf to root.
*/


vector<int>* longestPath(BinaryTreeNode<int>* root) {
    
    vector<int>* solution=new vector<int>();
    
    if(root==NULL){
        return solution;
    }else if(root->left!=NULL && root->right==NULL){
        solution=longestPath(root->left);
    }else if(root->left==NULL && root->right!=NULL){
        solution=longestPath(root->right);
    }else if(root->left!=NULL && root->right!=NULL){
        vector<int>* a=longestPath(root->left);
        vector<int>* b=longestPath(root->right);
        if(a->size()>b->size()){
            solution=a;
        }else{
            solution=b;
        }
    }
    solution->push_back(root->data);
    return solution;

}
