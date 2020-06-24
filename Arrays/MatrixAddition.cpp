/*
Given two 2D matrices, perform matrix addition and print the added matrix.
Perform the above in O(N*M) time and O(1) space complexity.
*/
void sumMatrix(int n1, int m1, int n2, int m2, int arr1[SIZE][SIZE], int arr2[SIZE][SIZE]){
    
    if(m1!=m2 || n1!=n2){
        cout<<"-1";
        return;
    }
    
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            arr1[i][j]+=arr2[i][j];
            cout<<arr1[i][j]<<" ";
            }
    }
   
}
