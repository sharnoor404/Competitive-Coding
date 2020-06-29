/*
Given a "complete" binary tree , print the following pattern using all its nodes.
root element
first element of second level
last element of  of second level
first element of the of the third level
last element of the third level
second element of the third level
second from last element of the third level
..... So on.
*/

#include<queue>
void printSpecificPattern(BinaryTreeNode<int> * root)
{
     if(root==NULL){
         return;
     }
    cout<<root->data<<" ";
    queue<BinaryTreeNode<int> *> Q1;
    queue<BinaryTreeNode<int> *> Q2;
    
    if(root->left!=NULL){
        Q1.push(root->left);
    }
    if(root->right!=NULL){
        Q2.push(root->right);
    }
    while(!Q1.empty() || !Q2.empty()){
        int n1=Q1.size();
        int n2=Q2.size();
        while(n1>0 || n2>0){
            if(n1>0){
                BinaryTreeNode<int> * x=Q1.front();
                Q1.pop();
                cout<<x->data<<" ";
                if(x->left!=NULL){
                    Q1.push(x->left);
                }
                if(x->right!=NULL){
                    Q1.push(x->right);
                }
                n1--;
            }
                if(n2>0){
                BinaryTreeNode<int> * x=Q2.front();
                Q2.pop();
                if(x->right!=NULL){
                    Q2.push(x->right);
                }
                cout<<x->data<<" ";
                if(x->left!=NULL){
                    Q2.push(x->left);
                }
                
                n2--;
            }
        }
    }
}

