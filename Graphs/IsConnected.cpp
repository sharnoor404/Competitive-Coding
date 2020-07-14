/*
Check if the given graph is connected or not
*/

#include <iostream>
using namespace std;

int DFStraversal(bool **edges,int V,bool *visited, int start,int &count){
    visited[start]=true;
    count++;
    for(int i=0;i<V;i++){
        if(!visited[i] && edges[start][i]){
           DFStraversal(edges,V,visited,i,count);
        }
    }
    
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
    int count=0;
     DFStraversal(edges,V,visited,0,count);
    if(count==V){
         cout<<"true";
     }else{
         cout<<"false";
     }

}

