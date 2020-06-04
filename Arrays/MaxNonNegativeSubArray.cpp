/*
Given an array of integers, A of length N, find out the maximum sum contiguous sub-array of non negative numbers from A.
Find and return the required subarray.
1. If there is a tie, then compare with segment's length and return segment which has maximum length.
2. If there is still a tie, then return the segment with minimum starting index.
*/


vector<int> Solution::maxset(vector<int> &A) {
    int start=-1;
    int start_index=-1;
    int end_index=-1;
    long long int sum=INT_MIN;
    long long int max_sum=INT_MIN;
    
    vector<int> solution;
    
    for(int i=0;i<A.size();i++){
        if(A[i]>=0){
            if(start==-1){
                start=i;
                sum=0;
            }
            sum+=A[i];
            if(sum>max_sum || (sum==max_sum && (i-start)>(end_index-start_index))){
                max_sum=sum;
                end_index=i;
                start_index=start;
            }
        }else{
            start=-1;
        }
    }
    if(start_index!=-1){
       for(int i=start_index;i<=end_index;i++){
        solution.push_back(A[i]);
    } 
    }
    
    return solution;
}

