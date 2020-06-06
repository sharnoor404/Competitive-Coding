/*
Write a program to solve a Sudoku puzzle by filling the empty cells.
Empty cells are indicated by the character '.'
*/

bool check_row(vector<vector<char> > &board,int x,int y,int a){
    char k=a+'0';
    for(int j=0;j<9;j++){
        if(j!=y && board[x][j]==k){
            return false;
        }
    }
    return true;
}

bool check_col(vector<vector<char> > &board,int x,int y,int a){
    char k=a+'0';
    for(int i=0;i<9;i++){
            if(i!=x && board[i][y]==k){
                return false;
            }
        }
        return true;
}

bool check_box(vector<vector<char> > &board,int x,int y,int a){
    
     char k=a+'0';
    
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
           if(!(i==x && j==y) && board[i][j]==k){
                return false;
            }
        }
    }
    return true;
}


bool sudokuHelper(vector<vector<char> > &A, int x=0,int y=0){
    
    if(x==8 && y==8){
        if(A[x][y]!='.'){
            return true;
        }else{
          for(int i=1;i<=9;i++){
            if(check_row(A,x,y,i) && check_col(A,x,y,i) && check_box(A,x,y,i)){
                A[x][y]='0'+i;
                return true;
            }else{
                A[x][y]='.';
            }
        }
        if(A[x][y]='.'){
            return false;
        }  
        }
        
    }
    
    if(A[x][y]!='.'){
        //already filled
        if(y<8){
            return sudokuHelper(A,x,y+1);
        }else if(y==8){
            return sudokuHelper(A,x+1,0);
        }
    }else{
        //not filled
        for(int i=1;i<=9;i++){
            if(check_row(A,x,y,i) && check_col(A,x,y,i) && check_box(A,x,y,i)){
                A[x][y]='0'+i;
                if(sudokuHelper(A,x,y)){
                    return true;
                }else{
                    A[x][y]='.';
                }
            }
        }
        if(A[x][y]='.'){
            return false;
        }
    }
}

void Solution::solveSudoku(vector<vector<char> > &A) {

    bool ans=sudokuHelper(A,0,0);
    
}

