/*
Given a binary tree and a sum, find all root-to-leaf paths where each path’s sum equals the given sum.
*/
void helper(TreeNode* A, int B, vector<int> x,vector<vector<int>> &solution,long long int sum){
    if(A==NULL){
        if(sum==B){
            solution.push_back(x);
        }
        return;
    }
    
    x.push_back(A->val);
    if(A->left==NULL && A->right==NULL){
        sum+=A->val;
        if(sum==B){
            solution.push_back(x);
        }
        sum=sum-(A->val);
        return;
    }else if(A->left!=NULL && A->right==NULL){
        helper(A->left,B,x,solution,sum+A->val);
    }else if(A->left==NULL && A->right!=NULL){
        helper(A->right,B,x,solution,sum+A->val);
    }else if(A->left!=NULL && A->right!=NULL){
        helper(A->left,B,x,solution,sum+A->val);
        helper(A->right,B,x,solution,sum+A->val);
    }
    x.pop_back();
} 

vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<int> x;
    vector<vector<int>> solution;
    helper(A,B,x,solution,0);
    return solution;
    
}

