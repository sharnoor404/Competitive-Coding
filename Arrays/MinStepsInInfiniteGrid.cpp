int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int min_dist=0;
    
    for(int i=0;i<A.size()-1;i++){
         int x=min(abs(A[i+1]-A[i]),abs(B[i+1]-B[i]));
        //for digonal travel
         int y=max(abs(A[i+1]-A[i]),abs(B[i+1]-B[i]))-x;
       //for vertical or horizontal travel
         
         min_dist+=(x+y);
    }
    return min_dist;
}
