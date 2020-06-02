int Solution::maxArr(vector<int> &A) {
    
    int max1=INT_MIN;
    int min1=INT_MAX;
    int max2=INT_MIN;
    int min2=INT_MAX;
    
    for(int i=0;i<A.size();i++){
        if((A[i]+i) > max1){
            max1=A[i]+i;
        }
        if((A[i]+i) <min1){
            min1=A[i]+i;
        }
        
        if((A[i]-i) > max2){
            max2=A[i]-i;
        }
        if((A[i]-i) <min2){
            min2=A[i]-i;
        }
        
    }
    return max(abs(max1-min1), abs(max2-min2));
}

