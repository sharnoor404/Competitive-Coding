/*
Rotate a 2D matrix by 90 degrees anticlockwise rotation
*/
void rotate(int **input, int n){
   for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
           int temp=input[i][j];
           input[i][j]=input[j][i];
           input[j][i]=temp;
       }
   }
    
    for(int j=0;j<n;j++){
        for(int i=0;i<n/2;i++){
            int temp=input[i][j];
            input[i][j]=input[n-1-i][j];
            input[n-1-i][j]=temp;
        }
    }
    
}


