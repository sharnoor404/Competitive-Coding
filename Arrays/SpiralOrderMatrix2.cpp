/*
Given an integer A, generate a square matrix filled with elements from 1 to A2 in spiral order.
*/

vector<vector<int> > Solution::generateMatrix(int A) {
    
    vector<vector<int>> result(A);
    
    for(int i=0;i<A;i++){
        result[i].resize(A);
    }
    
    int count=1;
    int start_row=0;
    int start_col=0;
    int end_row=A-1;
    int end_col=A-1;
    
    while(count<=A*A){
        
        for(int j=start_col;j<=end_col;j++){
            result[start_row][j]=count;
            count++;
        }
        start_row++;
        
        if(count>A*A){
            break;
        }
        for(int i=start_row;i<=end_row;i++){
            result[i][end_col]=count;
            count++;
        }
        end_col--;
        
        if(count>A*A){
            break;
        }
        
        for(int j=end_col;j>=start_col;j--){
            result[end_row][j]=count;
            count++;
        }
        end_row--;
        
        if(count>A*A){
            break;
        }
        
        for(int i=end_row;i>=start_row;i--){
            result[i][start_col]=count;
            count++;
        }
        start_col++;
    }
    
    return result;
}

