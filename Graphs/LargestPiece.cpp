/*
Given a n*n cake made of 0's and 1's find the maximum size of the piece with only 1's and no 0's.
*/

int solveHelper(int n,char cake[NMAX][NMAX],bool **visited,int x,int y){
    
    int ans=0;
	visited[x][y]=true;
	if(y-1>=0 && cake[x][y-1]=='1' && !visited[x][y-1]){
        ans+=solveHelper(n,cake,visited,x,y-1);
    }
    if(x+1<n && cake[x+1][y]=='1' && !visited[x+1][y]){
        ans+=solveHelper(n,cake,visited,x+1,y);
    }
    if(y+1<n && cake[x][y+1]=='1' && !visited[x][y+1]){
        ans+=solveHelper(n,cake,visited,x,y+1);
    }
    if(x-1>=0 && cake[x-1][y]=='1' && !visited[x-1][y]){
        ans+=solveHelper(n,cake,visited,x-1,y);
    }
    
    
    return ans+1;
    
}

int solve(int n,char cake[NMAX][NMAX])
{
	bool **visited=new bool*[n];
    for(int i=0;i<n;i++){
        visited[i]=new bool[n];
        for(int j=0;j<n;j++){
            visited[i][j]=false;
        }
    }
    
    int maxSize=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(cake[i][j]=='1' && !visited[i][j]){
                int a=solveHelper(n,cake,visited,i,j);
                if(a>maxSize){
                    maxSize=a;
                }
            }
        }
    }
    return maxSize;
    
}
