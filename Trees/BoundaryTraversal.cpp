/*
Given a binary tree having N nodes, print its boundary traversal.
*/
void helper(BinaryTreeNode<int>* root,int flag){
    if(root==NULL)
    {
        return;
    }
    	if(flag==1){
            
            if(!(root->left==NULL && root->right==NULL)){
                 cout<<root->data<<" ";
            }
               
            if(root->left!=NULL){
                helper(root->left,flag);
            }else{
                helper(root->right,flag);
            }
            
        }
    	if(flag==2){
            helper(root->left,flag);
            helper(root->right,flag);
            if(root->left==NULL && root->right==NULL){
                cout<<root->data<<" ";
            }
            
        }
        if(flag==3){
            if(root->right!=NULL){
                helper(root->right,flag);
            }else{
                helper(root->left,flag);
            }
               if(!(root->left==NULL && root->right==NULL)){
                 cout<<root->data<<" ";
            }
			
        }
        
    	
}

void solve(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    //print left
    helper(root->left,1);
    //print leaves
    helper(root,2);
    //print right
    helper(root->right,3);
    
    	
    
}

