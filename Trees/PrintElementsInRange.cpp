#include<vector>
#include<algorithm>
/*
Given a Binary Search Tree and two integers k1 and k2, 
find and print the elements which are in range k1 and k2 (both inclusive).
Print the elements in increasing order.
*/
void helper(BinaryTreeNode<int>* root, int k1, int k2,vector<int> &ans){
   if(root==NULL){
        return;
    }
    if(k1>root->data){
        helper(root->right,k1,k2,ans);
    }
    if(k2<root->data){
        helper(root->left,k1,k2,ans);
    }
    
    if(root->data>=k1 && root->data<=k2){
        ans.push_back(root->data);
        helper(root->left,k1,k2,ans);
        helper(root->right,k1,k2,ans);
    } 
}

void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) {
    
	vector<int> ans;
    helper(root,k1,k2,ans);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
