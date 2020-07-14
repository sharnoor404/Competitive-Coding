/*
To check if there exists a path between two vertices of a the given graph
*/
#include <iostream>
using namespace std;

bool hasPath(bool **edges,bool *visited,int V,int start,int end){
    
    if(edges[start][end]==true){
        return true;
    }
    
    visited[start]=true;
    
    for(int j=0;j<V;j++){
            if(visited[j]==false && edges[start][j]){
                if(hasPath(edges,visited,V,j,end)){
                return true;
            }
        }  
    }
    
    return false;
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
    
    int start,end;
    cin>>start>>end;
    
    if(hasPath(edges,visited,V,start,end)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    
}

