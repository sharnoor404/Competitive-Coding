/*
Given a directed graph, check if it contains cycle(with atleast 2 nodes) or not?
*/
#include<unordered_map>

int check_cycle(unordered_map<int,vector<int>> &edges,vector<int> &visited,int currNode){
   
    visited[currNode]=1;
    
    for(int i=0;i<edges[currNode].size();i++){
        if(visited[edges[currNode][i]]==0){
            if(check_cycle(edges,visited,edges[currNode][i])){
                return 1;
            }
        }else{
            return 1;
        }
    }
    visited[currNode]=0;
    return 0;
}

int Solution::solve(int A, vector<vector<int> > &B) {
    
    unordered_map<int,vector<int>> edges;
    
    for(int i=0;i<B.size();i++){
        edges[B[i][0]].push_back(B[i][1]);
    }
    
    vector<int> visited(A+1,0);
    
    for(int i=1;i<=A;i++){
            if(check_cycle(edges,visited,i)){
                return 1;
        }
    }
    return 0;
}

