int Solution::maxSubArray(const vector<int> &A) {
    //using kadane's algo
    long long int curr_sum=0;
    long long int best_so_far=INT_MIN;
    
    for(int i=0;i<A.size();i++){
        curr_sum+=A[i];
        if(curr_sum>best_so_far){
            best_so_far=curr_sum;
        }
        if(curr_sum<0){
            curr_sum=0;
        }
    }
    return best_so_far;
}
