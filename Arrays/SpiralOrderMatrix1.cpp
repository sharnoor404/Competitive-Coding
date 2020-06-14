/*
Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.
*/
vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int start_row=0;
    int start_col=0;
    int end_row=A.size()-1;
    int end_col=A[0].size()-1;
    
    int x=A.size();
    int y=A[0].size();
//cout<<x<<y<<endl;
    int count=0;
    
    vector<int> solution;
    while(count<x*y){
        
    for(int j=start_col;j<=end_col;j++){
       // cout<<A[start_row][j]<<" ";
       solution.push_back(A[start_row][j]);
        count++;
    }
    start_row++;
    if(count==x*y){
        break;
    }
    for(int i=start_row;i<=end_row;i++){
       // cout<<A[i][end_col]<<" ";
        solution.push_back(A[i][end_col]);
        count++;
    }
    end_col--;
    if(count==x*y){
        break;
    }
    for(int j=end_col;j>=start_col;j--){
       // cout<<A[end_row][j]<<" ";
         solution.push_back(A[end_row][j]);
        count++;
    }
    end_row--;
    if(count==x*y){
        break;
    }
    for(int i=end_row;i>=start_row;i--){
       // cout<<A[i][start_col]<<" ";
         solution.push_back(A[i][start_col]);
        count++;
    }
    start_col++;
    if(count==x*y){
        break;
    }
    }
    
return solution;
}
