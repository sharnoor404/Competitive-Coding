/* Given a binary tree return all cousins(not siblings) of a node */
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> solution;
    if(A==NULL){
        return solution;
    }
    queue<TreeNode*> pendingNodes;
    pendingNodes.push(A);
    pendingNodes.push(NULL);
    bool flag=false;
    while(pendingNodes.size()!=0){
        if(pendingNodes.front()==NULL){
            //change level
            if(pendingNodes.size()==1 || flag==true){
                break;
            }
            else{
                pendingNodes.push(NULL);
                pendingNodes.pop();
            }
            
        }else{
            if((pendingNodes.front()->left!=NULL && pendingNodes.front()->left->val==B) || (pendingNodes.front()->right!=NULL && pendingNodes.front()->right->val==B)){
            pendingNodes.pop();
            flag=true;
        }else{
            if(pendingNodes.front()->left!=NULL){
                pendingNodes.push(pendingNodes.front()->left);
            }
            if(pendingNodes.front()->right!=NULL){
                pendingNodes.push(pendingNodes.front()->right);
            }
            pendingNodes.pop();
        }
        }
        
        
    }
   
    while(pendingNodes.size()!=0){
        if(pendingNodes.front()!=NULL){
            solution.push_back(pendingNodes.front()->val);
        }
        pendingNodes.pop();
    }
    return solution;
}

