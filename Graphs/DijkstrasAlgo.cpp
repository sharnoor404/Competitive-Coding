/*
Dijkstras Algorithm
*/

#include <iostream>
#include<climits>
using namespace std;

void Dijkstras(int **edges,bool *visited,int *min_distance_from_source,int V,int E,int source){
    
    visited[source]=true;
    
    for(int i=0;i<V;i++){
        int dist=min_distance_from_source[source] + edges[source][i];
        if(!visited[i] && edges[source][i] && dist<min_distance_from_source[i]){
            min_distance_from_source[i]=dist;
        }
    }
    
    int min_dist=INT_MAX;
    int min_index=INT_MAX;
    for(int i=0;i<V;i++){
        if(!visited[i] && min_distance_from_source[i]<min_dist){
            min_index=i;
            min_dist=min_distance_from_source[i];
        }
    }
    
    if(min_index==INT_MAX){
        return;
    }else{
        Dijkstras(edges,visited,min_distance_from_source,V,E,min_index);
    }
}


int main()
{
  int V, E;
  cin >> V >> E;

    int **edges=new int*[V];
    bool *visited=new bool[V];
    int *min_distance_from_source=new int[V];
    
    for(int i=0;i<V;i++){
        edges[i]=new int[V];
        visited[i]=false;
        min_distance_from_source[i]=INT_MAX;
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
    
    min_distance_from_source[0]=0;
    //considering 0 as source
    Dijkstras(edges,visited,min_distance_from_source,V,E,0);
 
    for(int i=0;i<V;i++){
        cout<<i<<" "<<min_distance_from_source[i]<<endl;
    }

  return 0;
}

