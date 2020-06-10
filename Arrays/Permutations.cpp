/*
Given a collection of numbers, return all possible permutations.
*/
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
