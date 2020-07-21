/*
Given a sorted array with positive and negative elements return a sorted array of their squares 
*/

vector<int> Solution::solve(vector<int> &A) {
    
    vector<int> solution;
    int i=0;
    for(i=0;i<A.size();i++){
        if(A[i]>=0){
            break;
        }
    }
    
    //i points to first positive integer
    int j=i-1;
    //j points to the preceding negative integer
    
    while(i<A.size() && j>=0){
        if(abs(A[j])>=abs(A[i])){
            solution.push_back(A[i]*A[i]);
            i++;
        }else{
            solution.push_back(A[j]*A[j]);
            j--;
        }
    }
    if(j>=0){
        for(int k=j;k>=0;k--){
            solution.push_back(A[k]*A[k]);
        }
    }else if(i<A.size()){
        for(int k=i;k<A.size();k++){
            solution.push_back(A[k]*A[k]);
        }
    }
    return solution;
}

