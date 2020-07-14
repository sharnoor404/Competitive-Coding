/*
Get path between two vertices of a graph using DFS
*/

#include <iostream>
using namespace std;

bool getPath(bool **edges,bool *visited,int V,int start,int end){
    if(start==end){
        cout<<start<<" ";
        return true;
    }
    
    visited[start]=true;
    
    for(int j=0;j<V;j++){
        if(!visited[j] && edges[start][j]){
            if(getPath(edges,visited,V,j,end)){
                cout<<start<<" ";
                return true;
            }
        }
    }
    return false;
}

int main()
{
  int V, E, tempX, tempY;
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

        getPath(edges,visited,V,start,end);

}

