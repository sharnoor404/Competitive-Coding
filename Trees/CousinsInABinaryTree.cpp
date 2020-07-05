/* Given a binary tree return all cousins(not siblings) of a node */
vector<int> Solution::solve(TreeNode* A, int B) {
    queue<TreeNode*> pendingNodes;
    pendingNodes.push(A);
    pendingNodes.push(NULL);
    while(pendingNodes.size()!=0){
        if(pendingNodes.front()==NULL){
            //change level
            if(pendingNodes.size()==1){
                break;
            }
            else{
                pendingNodes.push(NULL);
                pendingNodes.pop();
            }
            
        }
        if(pendingNodes.front->left->val==B || pendingNodes.front()->right->val==B){
            pendingNodes.pop();
        }else{
            if(pendingNodes.left!=NULL){
                pendingNodes.push(pendingNodes.front()->left);
            }
            if(pendingNodes.right!=NULL){
                pendingNodes.push(pendingNodes.front()->right);
            }
            pendingNodes.pop();
        }
        
    }
    
    
}

