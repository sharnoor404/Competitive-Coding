/*
Given a positive integer n and a string s consisting only of letters D or I, 
you have to find any permutation of first n positive integer that satisfy the given input string.
D means the next number is smaller, while I means the next number is greater.
*/

vector<int> Solution::findPerm(const string A, int B) {
    vector<int> solution;
    int start=1;
    int end=B;
    
    for(int i=0;i<A.size();i++){
        
        if(A[i]=='I'){
            solution.push_back(start);
            start++;
        }else{
            solution.push_back(end);
            end--;
        }
        
    }
    if(A[A.size()-1]=='I'){
        solution.push_back(start);
    }
    else{
        solution.push_back(end);
    }
    return solution;
}

