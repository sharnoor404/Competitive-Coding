/*
Given an undirected graph return all its connected components.
*/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void ConnectedComponents(bool **edges,bool *visited,int V,vector<int> &solution,int start)
{
    visited[start]=true;
    solution.push_back(start);
    for(int i=0;i<V;i++){
        if(!visited[i] && edges[start][i]){
            ConnectedComponents(edges,visited,V,solution,i);
        }
    }
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
    
    vector<vector<int>> components;
    for(int i=0;i<V;i++){
        if(visited[i]==false){
            vector<int> solution;
            ConnectedComponents(edges,visited,V,solution,i);
            sort(solution.begin(),solution.end());
            components.push_back(solution);
        }
    }
    
    for(int i=0;i<components.size();i++){
        for(int j=0;j<components[i].size();j++){
            cout<<components[i][j]<<" ";
        }
        cout<<endl;
    }
}

