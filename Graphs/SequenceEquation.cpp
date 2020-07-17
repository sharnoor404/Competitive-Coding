/*
Sequence Equation problem- HR
*/

vector<int> permutationEquation(vector<int> p) {
unordered_map<int,int> IndexKey;
for(int i=0;i<(int)p.size();i++){
    IndexKey[p[i]]=i;
}
vector<int> solution;
for(int i=1;i<=(int)p.size();i++){
    solution.push_back(IndexKey[IndexKey[i]+1]+1);
}
return solution;
}
