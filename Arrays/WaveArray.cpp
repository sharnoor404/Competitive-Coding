/*
Given an array of integers, sort the array into a wave like array and return it,
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....
NOTE : If there are multiple answers possible, return the one thats lexicographically smallest.
*/

vector<int> Solution::wave(vector<int> &A) {
    
    if(A.size()==0 || A.size()==1){
        return A;
    }
    
    sort(A.begin(),A.end());
    vector<int> ans;
    int i=0;
    int j=1;
    while(i<A.size() && j<A.size()){
        ans.push_back(A[j]);
        j=j+2;
        ans.push_back(A[i]);
        i=i+2;
    }
    if(i<A.size()){
        ans.push_back(A[i]);
        i++;
    }
    return ans;
}

