/*
Given a 2D matrix, compute its transpose.
*/

void transpose( int A[][N],int n) 
{ 
	for(int i=0;i<n;i++){
	    for(int j=i;j<n;j++){
	        int temp=A[i][j];
	        A[i][j]=A[j][i];
	        A[j][i]=temp;
	    }
	}
	
}
