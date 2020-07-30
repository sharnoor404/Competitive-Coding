/*
Given a tree rooted at 1 with N nodes labelled from 1 to N.
An array A defines whether a node is good(1) or bad(0)
Compute the number of root to leaf paths in the tree that contain not more than C good nodes.
*/

#include<unordered_map>

void count(unordered_map<int,vector<int>> &edges,int C,int currNode,vector<int> &A,int GoodNodeCount,int &ans){
    
    if(A[currNode-1]==1){
        GoodNodeCount++;
    }
    
    if(edges[currNode].size()==0){
        if(GoodNodeCount<=C){
            ans++;
        }
        return;
    }

    
    for(int i=0;i<edges[currNode].size();i++){

        count(edges,C,edges[currNode][i],A,GoodNodeCount,ans);
 
    }

}

int Solution::solve(vector<int> &A, vector<vector<int> > &B, int C) {
    
    unordered_map<int,vector<int>> edges;
    for(int i=0;i<B.size();i++){
        if(B[i][0]<B[i][1]){
            edges[B[i][0]].push_back(B[i][1]);
        }else{
            edges[B[i][1]].push_back(B[i][0]);
        }
    }
    
    int GoodNodeCount=0;
    int ans=0;
    count(edges,C,1,A,GoodNodeCount,ans);
    return ans;
    
}

