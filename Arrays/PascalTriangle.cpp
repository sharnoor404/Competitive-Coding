/*
Given numRows, generate the first numRows of Pascal’s triangle.
Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.
*/

vector<vector<int> > Solution::solve(int A) {
    
    vector<vector<int>> result(A);
    
    for(int i=0;i<A;i++){
        result[i].resize(i+1);
        result[i][0]=1;
        result[i][i]=1;
    }
    
    for(int i=2;i<A;i++){
        for(int j=1;j<i;j++){
            result[i][j]=result[i-1][j-1]+result[i-1][j];
        }
    }
    
    return result;
}

