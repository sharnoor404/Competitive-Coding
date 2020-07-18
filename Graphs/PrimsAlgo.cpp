/*
Prims Algo
*/

#include <iostream>
#include<climits>
using namespace std;

void prims(int **edges,int *parent,bool *visited,int *weights,int V,int E,int source){
    visited[source]=true;
	
    for(int i=0;i<V;i++){
        if(edges[source][i]>0 && !visited[i] && edges[source][i]<weights[i]){
                weights[i]=edges[source][i];
                parent[i]=source;
        }
    }
    
    int min_weight=INT_MAX;
    int min_index=INT_MAX;
    for(int i=0;i<V;i++){
        if(!visited[i] && weights[i]<min_weight){
            min_weight=weights[i];
            min_index=i;
        }
    }
    if(min_index==INT_MAX){
        return;
    }else{
        if(parent[min_index]<min_index){
            cout<<parent[min_index]<<" "<<min_index<<" "<<min_weight<<endl;
        }else{
            cout<<min_index<<" "<<parent[min_index]<<" "<<min_weight<<endl;
        }
        prims(edges,parent,visited,weights,V,E,min_index);
    }
    
}

int main()
{
  int V, E;
  cin >> V >> E;
  
  int **edges=new int*[V];
  int *parent=new int[V];
  bool *visited=new bool[V];
  int *weights=new int[V];
  for(int i=0;i<V;i++){
     
     parent[i]=INT_MIN;
     edges[i]=new int[V];
     visited[i]=false;
     weights[i]=INT_MAX;
      
      for(int j=0;j<V;j++){
          edges[i][j]=0;
      }
  }
    
  for(int i=0;i<E;i++){
      int s,d,w;
      cin>>s>>d>>w;
      edges[s][d]=w;
      edges[d][s]=w;
  }
    
// assuming 0th vertex to be the source
  weights[0]=0;
  parent[0]=-1;
  prims(edges,parent,visited,weights,V,E,0);
    
  return 0;
}

