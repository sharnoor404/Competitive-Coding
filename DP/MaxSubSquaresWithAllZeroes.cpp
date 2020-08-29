/*
Max sub square with all 0's : CN
*/
int findMaxSquareWithAllZeros(int** arr, int row, int col){
    
    int **dp=new int*[row];
    
    for(int i=0;i<row;i++){
        dp[i]=new int[col];
    }
    
    for(int j=0;j<col;j++){
        if(arr[0][j]==0){
            dp[0][j]=1;
        }else{
            dp[0][j]=0;
        }
    }
    
    for(int i=0;i<row;i++){
        if(arr[i][0]==0){
            dp[i][0]=1;
        }else{
            dp[i][0]=0;
        }
    }
    
    int maxSqSize=0;
    
    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            if(arr[i][j]==0){
                dp[i][j]=1+std::min(dp[i-1][j-1],std::min(dp[i][j-1],dp[i-1][j]));
            	if(dp[i][j]>maxSqSize){
                    maxSqSize=dp[i][j];
                }
            }else{
                dp[i][j]=0;
            }
        }
    }
    /*
    for(int i=0;i<row;i++){
        delete [] dp[i];
    }
    delete [] dp;
    */
    return maxSqSize;
}
