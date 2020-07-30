/*
Given an undirected graph, check if the given graph consists of a cycle(with atleast 3 nodes) or not?
*/
int detectCycle(unordered_map<int,vector<int>> &edges,vector<int> &visited,int currNode,int parentNode,int NodesInCycle){
    
    visited[currNode]=1;
    
    for(int i=0;i<edges[currNode].size();i++){
        
        if(visited[edges[currNode][i]]==0){
   
            if(detectCycle(edges,visited,edges[currNode][i],currNode,NodesInCycle+1)){
                return 1;
            }
        }else if(visited[edges[currNode][i]]==1 && edges[currNode][i]!=parentNode){
            return 1;
        }
    }
   
    return 0;
    
}


int Solution::solve(int A, vector<vector<int> > &B) {
    
    unordered_map<int,vector<int>> edges;
    for(int i=0;i<B.size();i++){
        edges[B[i][0]].push_back(B[i][1]);
        edges[B[i][1]].push_back(B[i][0]);
    }
    
    vector<int> visited(A+1,0);
    
    
    for(int i=1;i<=A;i++){
        if(visited[i]==0 && detectCycle(edges,visited,i,-1,0)==1){
            return 1;
        }
    }
    
    return 0;
}

