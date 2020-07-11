/*
Bulbs problem : IB
*/
int Solution::bulbs(vector<int> &A) {
    int look_for=0;
    int count=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==look_for){
            count++;
            if(look_for==0){
            look_for=1;
            }else{
                look_for=0;
            }
        }
    }
    return count;
}

