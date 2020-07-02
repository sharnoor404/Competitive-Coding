/*
Given a binary tree return its preorder traversal without using recursion.
*/
vector<int> Solution::preorderTraversal(TreeNode* A) {

    stack<TreeNode*> pendingNodes;
    vector<int> solution;
    
    while(1){
           while(A!=NULL){
        if(A->right!=NULL){
            pendingNodes.push(A->right);
        }
        solution.push_back(A->val);
        A=A->left;
        }
        if(pendingNodes.size()!=0){
            A=pendingNodes.top();
            pendingNodes.pop();
        }else{
            break;
        }
    }
    return solution;
    
}
