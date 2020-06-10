Given a non-negative integer n representing the total number of bits in the code,
print the sequence of gray code. A gray code sequence must begin with 0.

vector<int> Solution::grayCode(int A) {
    
    vector<int> result(1,0);
    
    for(int i=0;i<A;i++){
        int a=result.size();
        for(int j=a-1;j>=0;j--){
            result.push_back(result[j]+(1<<i));
        }
    }
    return result;
}

