/*
Given N islands (numbered from 1 to N) and two lists of size M (u and v) 
denoting island u[i] is connected to island v[i] and vice versa . 
Count the number of connected groups of islands.
*/

void countComponents(bool **edges,bool *visited,int V,int start){
    visited[start]=true;
    for(int i=1;i<V;i++){
        if(!visited[i] && edges[start][i]){
            countComponents(edges,visited,V,i);
        }
    }
}

int solve(int n,int m,vector<int>u,vector<int>v)
{
	
    bool **edges=new bool*[n+1];
    bool *visited=new bool[n+1];
    for(int i=0;i<=n;i++){
        edges[i]=new bool[n+1];
        visited[i]=false;
        for(int j=0;j<=n;j++){
            edges[i][j]=false;
        }
    }
    for(int i=0;i<m;i++)
    {
        edges[u[i]][v[i]]=true;
        edges[v[i]][u[i]]=true;
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(visited[i]==false){
            count++;
            countComponents(edges,visited,n+1,i);
        }
    }
    return count;
    
}
