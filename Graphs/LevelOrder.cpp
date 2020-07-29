/*
Given a binary tree return its level order traversal from left to right
*/
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int>> solution;
    queue<TreeNode*> Q;
    Q.push(A);
    Q.push(NULL);
    
    vector<int> x;
    while(!Q.empty()){
        
        if(Q.front()==NULL){
            solution.push_back(x);
            x.clear();
            if(Q.size()>1){
                Q.push(NULL);
            }
        }
        
        if(Q.front()!=NULL){
           x.push_back(Q.front()->val);
        if(Q.front()->left!=NULL){
            Q.push(Q.front()->left);
        }
        if(Q.front()->right!=NULL){
            Q.push(Q.front()->right);
        } 
        }
        
        Q.pop();
        
    }
    
    return solution;
    
}

