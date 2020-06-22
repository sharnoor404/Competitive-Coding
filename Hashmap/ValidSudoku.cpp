/*
Determine if the given partially filled sudoku is a valid one or not.
*/

bool check_row(const vector<string> &A,int x,int y){
    char val=A[x][y];
    for(int j=0;j<9;j++){
        if(j!=y){
            if(A[x][j]==val){
                return false;
            }
        }
    }
    return true;
}

bool check_col(const vector<string> &A,int x,int y){
    char val=A[x][y];
    for(int i=0;i<9;i++){
        if(i!=x){
            if(A[i][y]==val){
                return false;
            }
        }
    }
    return true;
}


bool check_box(const vector<string> &A,int x,int y){
    char val=A[x][y];
    int start_row;
    int end_row;
    
    if(x>=0 && x<3){
        start_row=0;
        end_row=2;
    }else if(x>=3 && x<6){
        start_row=3;
        end_row=5;
    }else if(x>=6 && x<9){
        start_row=6;
        end_row=8;
    }
    
    int start_col;
    int end_col;
    
    if(y>=0 && y<3){
        start_col=0;
        end_col=2;
    }else if(y>=3 && y<6){
        start_col=3;
        end_col=5;
    }else if(y>=6 && y<9){
        start_col=6;
        end_col=8;
    }
    
    for(int i=start_row;i<=end_row;i++){
        for(int j=start_col;j<=end_col;j++){
            if(i==x && j==y){
                continue;
            }else if(A[i][j]==val){
                return false;
            }
        }
    }
    return true;
}

bool check_valid(const vector<string> &A,int i){
    for(int j=0;j<9;j++){
        if(A[i][j]!='.'){
            if(!(check_row(A,i,j) && check_col(A,i,j) && check_box(A,i,j))){
                    return false;
             }
        }
    }
    return true;
}


int Solution::isValidSudoku(const vector<string> &A) {
    for(int i=0;i<9;i++){
        if(check_valid(A,i)==false){
            return 0;
        }
    }
    return 1;
}

