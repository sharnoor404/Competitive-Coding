/*
Given a set of candidate numbers (C) and a target number (T),
find all unique combinations in C where the candidate numbers sums to T.
The same repeated number may be chosen from C unlimited number of times.
*/

void helper(vector<int> &A, int B,vector<vector<int> >& result,vector<int>& x,int start){
    if(B==0){
        vector<int> y;
        for(int i=0;i<x.size();i++){
            y.push_back(x[i]);
        }
        sort(y.begin(),y.end());
        result.push_back(y);
        return;
    }
    
    for(int i=start;i<A.size();i++){
        if(A[i]<=B){
        x.push_back(A[i]);
        helper(A,B-A[i],result,x,start);
        x.pop_back();
        }
        
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<vector<int>> result;
    vector<int> x;
    helper(A,B,result,x,0);
    sort(result.begin(),result.end());
    result.erase(unique(result.begin(),result.end()),result.end());
    
    return result;
    
}

