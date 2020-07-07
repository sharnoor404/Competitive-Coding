/*
Set Matrix 0 problem
*/

void Solution::setZeroes(vector<vector<int> > &A) {

    int M = A.size();
int N = A[0].size();

if(A[0][0]==0){
for(int i=1;i<N;i++){
if(A[0][i]==0)
A[0][i] = -1;
else
A[0][i] = 0;
}
for(int j=1;j<M;j++){
if(A[j][0]==0)
A[j][0] = -1;
else
A[j][0] = 0;
}
A[0][0] = 0;
}

else{
for(int i=1;i<N;i++){
if(A[0][i]==0){
for(int j=1;j<N;j++){
if(A[0][j]==0)
A[0][j] = -1;
else
A[0][j] = 0;
}
A[0][0] = 0;
break;
}
}

for(int i=1;i<M;i++){
if(A[i][0]==0){
for(int j=1;j<M;j++){
if(A[j][0]==0)
A[j][0] = -1;
else
A[j][0] = 0;
}
A[0][0] = 0;
break;
}
}
}

for(int i=1;i<M;i++){
for(int j=1;j<N;j++){
if(A[i][j]==0){
A[0][j] = -1;
A[i][0] = -1;
}
}
}

// for all columns:
for(int i=1;i<N;i++){
if(A[0][i]==-1){
for(int j=0;j<M;j++)
A[j][i] = 0;
}
}
for(int i=1;i<M;i++){
if(A[i][0]==-1){
for(int j=0;j<N;j++)
A[i][j] = 0;
}
}
    
    
}

