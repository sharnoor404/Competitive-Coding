/*
Given an array of strings, find the longest common prefix for all strings
*/

string Solution::longestCommonPrefix(vector<string> &A) {
    
    string solution=A[0];
    for(int i=1;i<A.size();i++){
        int j=0;
        
        while(j<std::min(A[i].size(),A[0].size()) && A[i][j]==solution[j]){
            j++;
        }
        solution=solution.substr(0,j);
    }
    return solution;
}

