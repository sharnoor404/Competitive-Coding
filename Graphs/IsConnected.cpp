/*
Check if the given graph is connected or not
*/

#include <iostream>
using namespace std;

bool DFStraversal(bool **edges,int V,bool *visited, int start){
    visited[start]=true;
    for(int i=0;i<V;i++){
        if(!visited[i] && edges[start][i]){
           return DFStraversal(edges,V,visited,i);
        }
    }
    
    for(int i=0;i<V;i++){
        if(visited[i]==false){
            return false;
        }
    }
    return true;
}

int main() {
    int V, E;
    cin >> V >> E;

	bool **edges=new bool*[V];
    bool *visited=new bool[V];
    
    for(int i=0;i<V;i++){
        edges[i]=new bool[V];
        visited[i]=false;
        for(int j=0;j<V;j++){
            edges[i][j]=false;
        }
    }
    for(int i=0;i<E;i++){
        int s,e;
        cin>>s>>e;
        edges[s][e]=true;
        edges[e][s]=true;
    }
    
     if(DFStraversal(edges,V,visited,0)){
         cout<<"true";
     }else{
         cout<<"false";
     }

}

