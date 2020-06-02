//You are given a read only array of n integers from 1 to n.
//Each integer appears exactly once except A which appears twice and B which is missing.
//Return A and B.

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int sum_arr=0;
    long long int sum_sq_arr=0;
    for(long long int i=0;i<A.size();i++){
        sum_arr=(long long)(sum_arr+A[i]);
        sum_sq_arr=(long long)(sum_sq_arr+(long long)pow(A[i],2));
    }
    long long int size=A.size();
    long long int sum=(long long)(size*(size+1))/2;
    long long sum_sq=(long long)((size)*(long long)((size+1)*(2*size+1)))/6;
    
    long long int x=(long long)(sum_sq-sum_sq_arr);
    long long int y=(long long)(sum-sum_arr);
    
    long long int z=(long long)(x/y);
    int B=(y+z)/2;
    int C=z-B;
    vector<int> solution;
    solution.push_back(C);
    solution.push_back(B);
    
    return solution;
}

