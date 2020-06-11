/*
Given a string s, partition s such that every string of the partition is a palindrome.
Return all possible palindrome partitioning of s.
*/
bool checkPalindrome(string x){
    if(x.length()==1){
        return true;
    }
    int end=x.length()-1;
    for(int i=0;i<x.length()/2;i++){
        if(x[i]!=x[end-i]){
            return false;
        }
    }
    return true;
}


void helper(string A,vector<string>& s,vector<vector<string>>& result,int index){
    if(index==A.length()){
        result.push_back(s);
        return;
    }
    string x;
    for(int i=index;i<A.length();i++){
        x=x+A[i];
       if(checkPalindrome(x)){
           s.push_back(x);
           helper(A,s,result,i+1);
           s.pop_back();
       }
    }
}

vector<vector<string> > Solution::partition(string A) {
   
    vector<vector<string>> result;
    vector<string> s;
    helper(A,s,result,0);
    return result;
}

