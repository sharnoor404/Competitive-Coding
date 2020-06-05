/*
Given an integer array, find if an integer p exists in the array such that the number of integers greater than p in the array equals to p
If such an integer is found return 1 else return -1.
*/
int Solution::solve(vector<int> &A) {
    unordered_map<int,int> ourmap;
    sort(A.begin(),A.end());
    for(int i=A.size()-1;i>=0;i--){
        if(ourmap.count(A[i])==0){
            ourmap[A[i]]=A.size()-1-i;
            if(A[i]==ourmap[A[i]]){
                return 1;
            }
        }
        
    }
    return -1;
}

