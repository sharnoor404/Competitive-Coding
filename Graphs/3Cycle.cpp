/*
Given a graph with N vertices (numbered from 1 to N) and Two Lists (U,V) of size M where (U[i],V[i]) and (V[i],U[i]) 
are connected by an edge , then count the distinct 3-cycles in the graph
*/

int solve(int n,int m,vector<int>u,vector<int>v)
{
	bool **edges=new bool*[n+1];
    for(int i=0;i<=n;i++){
        edges[i]=new bool[n+1];
        for(int j=0;j<=n;j++){
            edges[i][j]=false;
        }
    }
    
    for(int i=0;i<m;i++){
        edges[u[i]][v[i]]=true;
        edges[v[i]][u[i]]=true;
    }
    
    int ans=0;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(edges[i][j]){
              for(int k=1;k<=n;k++){
                  if(k!=i && edges[j][k] && edges[i][k]){
                      ans++;
                  }
            
            }  
            } 
        }
    }

    return ans/6;
    
}
