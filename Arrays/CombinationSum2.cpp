/*
Given a collection of candidate numbers (C) and a target number (T), 
find all unique combinations in C where the candidate numbers sums to T.

Each number in C may only be used once in the combination.
*/

void helper(vector<int> &A, int B, vector<vector<int>>& result, vector<int>& dummy,int index){
    
    if(index>A.size()){
        return;
    }
    
    if(B==0){
        vector<int> x;
        for(int i=0;i< dummy.size();i++){
            x.push_back( dummy[i]);
        }
        sort(x.begin(),x.end());
        result.push_back(x);
        return;
    }
    for(int i=index;i<A.size();i++){
        if(A[i]<=B){
            dummy.push_back(A[i]);
            helper(A,B-A[i],result,dummy,i+1);
            dummy.pop_back();
        }
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {

    vector<vector<int>> result;
    vector<int> dummy;
    helper(A,B,result,dummy,0);
    sort(result.begin(),result.end());
    result.erase(unique(result.begin(),result.end()),result.end());
    return result;
}

