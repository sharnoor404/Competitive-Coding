/*
Given N x M character matrix A of O's and X's, where O = white, X = black.
Return the number of black shapes. A black shape consists of one or more adjacent X's (diagonals not included)
*/
void findShape(vector<string> &A,int colSize,int **visited,int x,int y){
    
    visited[x][y]=1;
    
    if(x+1<A.size() && A[x+1][y]=='X' && visited[x+1][y]==0){
        findShape(A,colSize,visited,x+1,y);
    }
    if(y+1<colSize && A[x][y+1]=='X' && visited[x][y+1]==0){
        findShape(A,colSize,visited,x,y+1);
    }
    if(x-1>=0 && A[x-1][y]=='X' && visited[x-1][y]==0){
        findShape(A,colSize,visited,x-1,y);
    }
    if(y-1>=0 && A[x][y-1]=='X' && visited[x][y]==0){
        findShape(A,colSize,visited,x,y-1);
    }
}

int Solution::black(vector<string> &A) {
    
    //apply dfs at all unvisited nodes
    
   int col= A[0].size();
   int **visited=new int*[A.size()];
   
   for(int i=0;i<A.size();i++){
       visited[i]=new int[col];
       for(int j=0;j<col;j++){
           visited[i][j]=0;
       }
   }
   
   int blackShapes=0;
   
   for(int i=0;i<A.size();i++){
       for(int j=0;j<col;j++){
           if(A[i][j]=='X' && visited[i][j]==0){
               cout<<i<<" "<<j<<endl;
              findShape(A,col,visited,i,j); 
              blackShapes++;
           }
       }
   }
    
   return blackShapes; 
}

