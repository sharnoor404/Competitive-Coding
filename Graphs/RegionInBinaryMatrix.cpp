/*
Given a binary matrix A of size N x M.
Find the maximum region with all 1's.
*/


int check_for_neighbours(vector<vector<int> > &A, int M, int N, int i, int j){
    int ans=0;
    A[i][j]=0;

    if(i+1<M && A[i+1][j]==1){
        ans+=check_for_neighbours(A,M,N,i+1,j);
    }
    if(j+1<N && A[i][j+1]==1){
        ans+=check_for_neighbours(A,M,N,i,j+1);
    }
    if(i+1<M && j+1<N && A[i+1][j+1]==1){
        ans+=check_for_neighbours(A,M,N,i+1,j+1);
    }
    if(i+1<M && j-1>=0 && A[i+1][j-1]==1){
        ans+=check_for_neighbours(A,M,N,i+1,j-1);
    }
    if(j-1>=0 && A[i][j-1]==1){
        ans+=check_for_neighbours(A,M,N,i,j-1);
    }
    if(i-1>=0 && A[i-1][j]==1){
        ans+=check_for_neighbours(A,M,N,i-1,j);
    }
    if(i-1>=0 && j-1>=0 && A[i-1][j-1]==1){
        ans+=check_for_neighbours(A,M,N,i-1,j-1);
    }
    if(i-1>=0 && j+1<N && A[i-1][j+1]==1){
        ans+=check_for_neighbours(A,M,N,i-1,j+1);
    }
    return ans+1;

}

int Solution::solve(vector<vector<int> > &A) {
    
    int max_count=0;
    int M=A.size();
    int N=A[0].size();
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(A[i][j]==1){
                int count=check_for_neighbours(A,M,N,i,j);
                    if(count>max_count){
                        max_count=count;
                 }           
            }
        }
    }
    return max_count;
}

