/*
Given a collection of numbers, return all possible permutations.
*/

//code 1
void solve(vector<int> v,int l,int r,vector<vector<int> > &out){
if(l==r)
{
out.push_back(v);
}
for(int i = l;i<=r;i++){
swap(v[i],v[l]);
solve(v,l+1,r,out);
swap(v[l],v[i]);
 
}
        return;
}
 
vector<vector<int> > Solution::permute(vector<int> &A) {
vector<vector<int> > out;
solve(A,0,A.size()-1,out);
return out;
}
//code 2
void swap(vector<int> & A,int x,int y){
    int temp=A[x];
    A[x]=A[y];
    A[y]=temp;
}

void helper(vector<int> & A,vector<vector<int>> &result,int index){
    if(index>=A.size()){
        result.push_back(A);
        return;
    }
    
    for(int i=index;i<A.size();i++){
        swap(A,i,index);
        helper(A,result,index+1);
        swap(A,i,index);
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int>> result;
     helper(A,result,0);
     return result;
}


