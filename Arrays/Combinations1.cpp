/*
Given two integers n and k, return all possible combinations of k numbers out of 1 2 3 ... n.
Make sure the combinations are sorted.
To elaborate,
Within every entry, elements should be sorted. [1, 4] is a valid entry while [4, 1] is not.
Entries should be sorted within themselves.
*/

void combineHelper(int A,int B,int start, vector<vector<int>>& result,vector<int>& x){
    if(B==0){
        result.push_back(x);
        return;
    }
    
    for(int i=start;i<=A;i++){
        x.push_back(i);
        combineHelper(A,B-1,i+1,result,x);
        x.pop_back();
    }
}

vector<vector<int> > Solution::combine(int A, int B) {
    
    vector<vector<int>> result;
    vector<int> x;
    combineHelper(A,B,1,result,x);
    return result;
}

