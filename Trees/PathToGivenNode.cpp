/*
Given a binary tree, return path from root to node.
*/
bool helper(TreeNode* A, int B,vector<int> &solution){
    if(A==NULL){
        return false;
    }
    if(A->val==B){
        solution.push_back(A->val);
        return true;
    }
    solution.push_back(A->val);
    if(helper(A->left,B,solution)){
        return true;
    }else if(helper(A->right,B,solution)){
        return true;
    }else{
        solution.pop_back();
        return false;
    }
}
 
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> solution;
    helper(A,B,solution);
    return solution;
}

