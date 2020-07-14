/*
BFS Traversal of undirected graph
*/
#include<queue>
#include <iostream>
using namespace std;

int main() {
    int V, E;
    cin >> V >> E;

    int** edges=new int*[V];
    for(int i=0;i<V;i++){
        edges[i]=new int[V];
        for(int j=0;j<V;j++){
            edges[i][j]=false;
        }
    }

    for(int i=0;i<E;i++){
        int startIndex,endIndex;
        cin>>startIndex>>endIndex;
        edges[startIndex][endIndex]=true;
        edges[endIndex][startIndex]=true;
    }

    bool* visited=new bool[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    int countVisited=0;
    
    queue<int> pendingVertex;
    pendingVertex.push(0);
    
while(!pendingVertex.empty()){
        
    if(visited[pendingVertex.front()]==false){
        
        int x=pendingVertex.front();
        cout<<x<<" ";
        pendingVertex.pop();
        
        for(int i=0;i<V;i++){
            if(edges[x][i]==true){
                if(visited[i]==false){
                    pendingVertex.push(i);
                }  
            }
        }

            visited[x]=true;
            countVisited++;
        
        if(pendingVertex.empty() && countVisited==V){
            break;
        }else if(pendingVertex.empty() && countVisited<V){
            for(int i=0;i<V;i++){
                if(visited[i]==false){
                    pendingVertex.push(i);
                    break;
                }
            }
        }

    }else{
        pendingVertex.pop();
    }
}
    return 0;
}

