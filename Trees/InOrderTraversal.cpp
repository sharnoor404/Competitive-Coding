/*
Given a binary tree, return its inorder traversal without using recursion.
*/
vector<int> Solution::inorderTraversal(TreeNode* A) {
    stack<TreeNode*> pendingNodes;
    vector<int> solution;
    while(1){
      while(A!=NULL){
        pendingNodes.push(A);
        A=A->left;
    }
    int flag=0;
    while(pendingNodes.size()!=0){
        solution.push_back(pendingNodes.top()->val);
        TreeNode* x=pendingNodes.top();
        pendingNodes.pop();
        if(x->right!=NULL){
            A=x->right;
            break;
        }else if(x->right==NULL && pendingNodes.size()==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        break;
    }
} 
return solution;
    }
    

