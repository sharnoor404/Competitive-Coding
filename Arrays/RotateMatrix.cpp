/*
Given an n x n 2D matrix representing an image.
Rotate the image by 90 degrees (clockwise,inplace).
*/

void Solution::rotate(vector<vector<int> > &A) {
//take transpose
for(int i=0;i<A.size();i++){
    for(int j=i;j<A.size();j++){
        int temp=A[i][j];
        A[i][j]=A[j][i];
        A[j][i]=temp;
    }
}

for(int j=0;j<A.size()/2;j++){
    for(int i=0;i<A.size();i++){
        int temp=A[i][j];
        A[i][j]=A[i][A.size()-1-j];
        A[i][A.size()-1-j]=temp;
    }
    
}
    
}

