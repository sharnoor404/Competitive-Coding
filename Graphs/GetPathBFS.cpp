/*
Get path between two vertices of a graph using BFS
*/

#include <iostream>
#include<queue>
#include<unordered_map>
using namespace std;


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
    
 	queue<int> pendingNodes;
    unordered_map<int,int> parentChild;
    pendingNodes.push(start);

    while(!pendingNodes.empty()){
        
        visited[pendingNodes.front()]=true;
        
        if(pendingNodes.front()==end){
            cout<<pendingNodes.front()<<" ";
            int x=pendingNodes.front();
            while(parentChild.count(x)>0){
                cout<<parentChild[x]<<" ";
                x=parentChild[x];
            }
            break;
        }else{
            for(int i=0;i<V;i++){
                if(!visited[i] && edges[pendingNodes.front()][i]){
                    pendingNodes.push(i);
                    if(parentChild.count(i)==0){
                        parentChild[i]=pendingNodes.front();
                    }
                    
                }
            }
            pendingNodes.pop();
        }
        
    }

  return 0;
}

