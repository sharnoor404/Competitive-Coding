/*
Given a binary tree, find and return the min and max data value of given binary tree.
*/

#include<climits>
PairAns minMax(BinaryTreeNode<int> *root) {
    if(root==NULL){
        PairAns p;
        p.max=INT_MIN;//max
        p.min=INT_MAX;//min
        return p;
    }
    
    PairAns p1=minMax(root->left);
    PairAns p2=minMax(root->right);
    int maximum_node=std::max(root->data,std::max(p1.max,p2.max));
    int minimum_node=std::min(root->data,std::min(p1.min,p2.min));
    PairAns ans;
    ans.max=maximum_node;
    ans.min=minimum_node;
    return ans;

}

