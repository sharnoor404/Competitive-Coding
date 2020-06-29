/*
Given a binary tree of N nodes, find and return the maximum sum path between two leaves of the given tree.
*/
long long int helper(BinaryTreeNode<int> *root,long long int &maxSumSoFar){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return root->data;
    }
    long long int sumFromLeft=helper(root->left,maxSumSoFar);
    long long int sumFromRight=helper(root->right,maxSumSoFar);
    
    if(root->left!=NULL && root->right!=NULL){
        maxSumSoFar=std::max(maxSumSoFar,sumFromLeft+sumFromRight+root->data);
        return std::max(sumFromLeft,sumFromRight)+root->data;
    }else if(root->left==NULL && root->right!=NULL){
        return sumFromRight+root->data;
    }else if(root->left!=NULL && root->right==NULL){
        return sumFromLeft+root->data;

    }
}

long long int maximumSumLeafpath(BinaryTreeNode<int> *root){
    long long int maxSumSoFar=0;
    helper(root,maxSumSoFar);
	return maxSumSoFar;
    
}

