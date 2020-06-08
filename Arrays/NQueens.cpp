/*
For a given N x N chessboard, find a way to place N queens such 
that no queen can attack any other queen on the chess board. 
Print all such configurations.
*/

bool check_diagonal(int** chessBoard,int n,int x,int y){
    
    //check Diagonal
    int i=x,j=y;
    while(i<n && j<n){
        if(chessBoard[i][j]==1){
            return false;
        }
        i++;
        j++;
    }
    
    i=x,j=y;
     while(i>=0 && j>=0){
        if(chessBoard[i][j]==1){
            return false;
        }
        i--;
        j--;
    }
    
    //check AntiDiagonal
    i=x,j=y;
    while(i<n && j>=0){
        if(chessBoard[i][j]==1){
            return false;
        }
        i++;
        j--;
    }
    
    i=x,j=y;
    while(i>=0 && j<n){
        if(chessBoard[i][j]==1){
            return false;
        }
        i--;
        j++;
    }
    return true;
}

bool check_col(int** chessBoard,int n,int x,int y){
    for(int i=0;i<n;i++){
        if(chessBoard[i][y]==1){
            return false;
        }
    }
    return true;    
}

bool check_row(int** chessBoard,int n,int x,int y){
    for(int j=0;j<n;j++){
        if(chessBoard[x][j]==1){
            return false;
        }
    }
    return true;
}

void helper(int** chessBoard,int n,int currRow,int queenCount=0){
    if(currRow==n){
        if(queenCount==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<chessBoard[i][j]<<" ";
            }
        }
        cout<<endl;            
        }

        return;
    }
    for(int j=0;j<n;j++){
        if(check_row(chessBoard,n,currRow,j) && check_col(chessBoard,n,currRow,j) && check_diagonal(chessBoard,n,currRow,j)){
            chessBoard[currRow][j]=1;
            helper(chessBoard,n,currRow+1,queenCount+1);
            chessBoard[currRow][j]=0;
        }
    }
    
}

void placeNQueens(int n){

    int **chessBoard=new int*[n];

    for(int i=0;i<n;i++){
        chessBoard[i]=new int[n];
        for(int j=0;j<n;j++){
            chessBoard[i][j]=0;
        }
    }

        helper(chessBoard,n,0,0);

}

