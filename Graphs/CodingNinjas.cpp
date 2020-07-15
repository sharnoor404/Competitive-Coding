/*
Check if the given Graph has a path which forms CODINGNINJA
*/

bool solveHelper(char Graph[][MAXN],int N, int M,int x,int y,int start,string temp){
    if(start==temp.size()){
        return true;
    }
    //mark as visited
    Graph[x][y]='X';
    
    int startRow;
    if(x-1<0){
        startRow=0;
    }else{
        startRow=x-1;
    }
    int startCol;
    if(y-1<0){
        startCol=0;
    }else{
        startCol=y-1;
    }
    int endRow;
    if(x+1>=N){
        endRow=N-1;
    }else{
        endRow=x+1;
    }
    int endCol;
    if(y+1>=M){
        endCol=M-1;
    }else{
        endCol=y+1;
    }
    
    for(int i=startRow;i<=endRow;i++){
        for(int j=startCol;j<=endCol;j++){
            if(Graph[i][j]==temp[start]){
                if(solveHelper(Graph,N,M,i,j,start+1,temp)){
                    return true;
                }
                
            }
        }
    }
    Graph[x][y]=temp[start-1];
    return false;
    
}


int solve(char Graph[][MAXN],int N, int M)
{
    string temp="CODINGNINJA";
    
	for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(Graph[i][j]=='C'){
                if(solveHelper(Graph,N,M,i,j,1,temp)){
                    return 1;
                }
            }
        }
    }
    return 0;
}
