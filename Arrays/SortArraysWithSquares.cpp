/*
Sort arrays with squares problem
*/
vector<int> Solution::solve(vector<int> &A) {
    int i=0;
    vector<int> solution;
    while(A[i]<0){
        i++;
    }
    //i points to first positive integer
    int j=i-1;
    //j points to the preceding negative integer
    
    while(j>=0 && i<A.size()){
        if(abs(A[j])>=A[i]){
            solution.push_back(A[i]*A[i]);
            i++;
        }else{
            solution.push_back(A[j]*A[j]);
            j--;
        }
    }
    if(j>=0){
        for(int i=j;i>=0;i--){
            solution.push_back(A[i]*A[i]);
        }
    }else if(i<A.size()){
        for(int k=i;k<A.size();k++){
            solution.push_back(A[k]*A[k]);
        }
    }
    return solution;
}

