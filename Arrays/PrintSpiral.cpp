/*
For a given two-dimensional integer array/list of size (N x M), print it in a spiral form.
*/
void spiralPrint(int **input, int nRows, int nCols)
{
    int startRow=0;
    int startCol=0;
    int endRow=nRows-1;
    int endCol=nCols-1;
    long int count=0;
    while(count<nRows*nCols){
        for(int j=startCol;j<=endCol;j++){
            cout<<input[startRow][j]<<" ";
            count++;
        }
        if(count>=nRows*nCols){
            break;
        }
        startRow++;
        for(int i=startRow;i<=endRow;i++){
            cout<<input[i][endCol]<<" ";
            count++;
        }
        if(count>=nRows*nCols){
            break;
        }
        endCol--;
        for(int j=endCol;j>=startCol;j--){
            cout<<input[endRow][j]<<" ";
            count++;
        }
        if(count>=nRows*nCols){
            break;
        }
        endRow--;
        for(int i=endRow;i>=startRow;i--){
            cout<<input[i][startCol]<<" ";
            count++;
        }
        startCol++;
    }
}
