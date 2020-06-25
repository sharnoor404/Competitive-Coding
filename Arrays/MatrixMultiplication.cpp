/*
Given two 2D matrices, perform matrix multiplication and print the resultant matrix.
*/

void multiplyMatrix(int n1, int m1, int n2, int m2, long long arr1[SIZE][SIZE], long long arr2[SIZE][SIZE]){
    
    if(m1!=n2){
        cout<<"-1";
        return;
    }
    int** result=new int*[n1];
    for(int i=0;i<n1;i++){
        result[i]=new int[m2];
        for(int j=0;j<m2;j++){
            result[i][j]=0;
        }
    }

for(int k=0;k<m2;k++){
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            result[i][k]+=(arr1[i][j]*arr2[j][k]);
        }
    }
}

for(int i=0;i<n1;i++){
    for(int j=0;j<m2;j++){
        cout<<result[i][j]<<" ";
    }
}

}
