/*
Give a N*N square matrix, return an array of its anti-diagonals.
*/

vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    
    vector<vector<int>> solution(2*A.size()-1);
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A.size();j++){
            solution[i+j].push_back(A[i][j]);
        }
    }
    return solution;
    
}

