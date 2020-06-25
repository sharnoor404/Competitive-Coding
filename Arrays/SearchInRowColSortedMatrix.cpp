/*
Given a matrix mat[] of size n x m, where every row and column is sorted in increasing order, 
and a number x is given.Find if x is present in the matrix or not.
*/
int search( int n,int m, int x, int mat[SIZE][SIZE])
{
    int selectedRow=0;
   for(int i=0;i<n;i++){
       if(x>=mat[i][0] && x<=mat[i][m-1]){
           selectedRow=i;
       }
   }
   for(int j=0;j<m;j++){
       if(mat[selectedRow][j]==x){
           return 1;
       }
   }
   return 0;
}
