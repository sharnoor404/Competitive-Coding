/*
Given an index k, return the kth row of the Pascal’s triangle.
Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.
*/
vector<int> Solution::getRow(int A) {
    vector<int> solution;
    
    int num=1;
    for(int i=0;i<=A;i++){
        solution.push_back(num);
        num=num*(A-i)/(i+1);
       
    }
    
    return solution;
    
}

