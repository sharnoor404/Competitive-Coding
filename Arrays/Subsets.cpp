/*
Given a set of distinct integers, S, return all possible subsets.
Note:
Elements in a subset must be in non-descending order.
The solution set must not contain duplicate subsets.
Also, the subsets should be sorted in ascending ( lexicographic ) order.
The list is not necessarily sorted.
*/

int subsetsHelper(vector<int> &A,vector<vector<int>> &result,int index){
    if(index==A.size()){
        vector<int> x;
        result.push_back(x);
        return 1;
    }
    int smallOutput=subsetsHelper(A,result,index+1);
    
        for(int i=0;i<smallOutput;i++){
            vector<int> x;
            x.push_back(A[index]);
            for(int j=0;j<result[i].size();j++){
                x.push_back(result[i][j]);
            }
            sort(x.begin(),x.end());
            result.push_back(x);
        }
    return 2*smallOutput;
    
}


vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<vector<int>> result;
    subsetsHelper(A,result,0);
    std::stable_sort(result.begin(), result.end());
    return result;
   
}

