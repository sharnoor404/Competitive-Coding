/*
Amazing Subarrays problem IB
*/
int Solution::solve(string A) {
    long long int amazingSubarray=0;
    for(int i=0;i<A.size();i++){
        char x=tolower(A[i]);
        if(x=='a' ||x=='e' || x=='i' ||x=='o' || x=='u'){
            amazingSubarray=(long long)(amazingSubarray+(A.size()-i));
        }
    }
    return amazingSubarray%10003;
}

