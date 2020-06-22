/*
Given an array A of integers and another non negative integer k, 
find if there exists 2 indices i and j such that A[i] - A[j] = k, i != j.
*/
int Solution::diffPossible(const vector<int> &A, int B) {
    
    unordered_map<int,int>ourmap;
    
    for(int i=0;i<A.size();i++){
        ourmap[A[i]]++;
    }
    
    for(int i=0;i<A.size();i++){
        if((ourmap.count(A[i]-B)>0 && B!=0) || (B==0 && ourmap[A[i]]>=2)){
            return 1;
        }
    }
    return 0;
}

