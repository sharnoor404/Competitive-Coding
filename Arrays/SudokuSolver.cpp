bool check_row(int board[][9],int x,int y,int a){
    for(int j=0;j<9;j++){
        if(j!=y && board[x][j]==a){
            return false;
        }
    }
    return true;
}

bool check_col(int board[][9],int x,int y,int a){
    for(int i=0;i<9;i++){
            if(i!=x && board[i][y]==a){
                return false;
            }
        }
        return true;
}

bool check_box(int board[][9],int x,int y,int a){
    
    int start_row;
    int start_col;
    int end_row;
    int end_col;
    
    if(x>=0 && x<=2){
        start_row=0;
        end_row=2;
    }else if(x>=3 && x<=5){
        start_row=3;
        end_row=5;
    }else if(x>=6 && x<=8){
        start_row=6;
        end_row=8;
    }
    
    if(y>=0 && y<=2){
        start_col=0;
        end_col=2;
    }else if(y>=3 && y<=5){
        start_col=3;
        end_col=5;
    }else if(y>=6 && y<=8){
        start_col=6;
        end_col=8;
    }
    
    for(int i=start_row;i<=end_row;i++){
        for(int j=start_col;j<=end_col;j++){
           if(!(i==x && j==y) && board[i][j]==a){
                return false;
            }
        }
    }
    return true;
}

bool sudokuSolver(int board[][9],int x=0,int y=0){

	if(x==8 && y==8){
 		   return true;
	}
    if(board[x][y]!=0){//already filled
        if(y<8){
            return sudokuSolver(board,x,y+1);//move to next column
        }else if(y==8){
            return sudokuSolver(board,x+1,0);//move to next row
        }
    }else{//not filled
        for(int i=1;i<=9;i++){
            if(check_row(board,x,y,i) && check_col(board,x,y,i) && check_box(board,x,y,i)){
                board[x][y]=i;
                if(sudokuSolver(board,x,y)){
                    return true;
                }else{
                    board[x][y]=0;
                }
            }
        }
        if(board[x][y]==0){
            return false;
        }
        
    }

}

