/*
Given a directed graph having A nodes labelled from 1 to A containing M edges given by matrix B of size M x 2
such that there is an edge directed from node
B[i][0] to node B[i][1].
Find whether a path exists from node 1 to node A.
Return 1 if path exists else return 0.
*/
#include<unordered_map>
int look_for_path(unordered_map<int,vector<int>> &arr,int N,int currIndex,vector<int> &visited){
    
    if(currIndex==N){
        return 1;
    }
    visited[currIndex]=1;
    
    
    for(int i=0;i<arr[currIndex].size();i++){
        if(visited[arr[currIndex][i]]==0){
            if(look_for_path(arr,N,arr[currIndex][i],visited))
            {
                return 1;
            }
        }
    }

    visited[currIndex]=0;
    return 0;
}

int Solution::solve(int A, vector<vector<int> > &B) {
    
    //generate adjacency matrix
    
    unordered_map<int,vector<int>> arr;
    
    for(int i=0;i<B.size();i++){
            arr[B[i][0]].push_back(B[i][1]);
    }
    
    vector<int> visited(A+1,0);
    
    //check for path
    return look_for_path(arr,A,1,visited);
    
}



