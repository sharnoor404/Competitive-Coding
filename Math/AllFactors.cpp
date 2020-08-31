/*
Given a number N, find all factors of N. : IB
*/
vector<int> Solution::allFactors(int A) {
    
    vector<int> v;
    
    for(int i=1;i<=sqrt(A);i++){
        if(A%i==0){
            v.push_back(i);
        }
    }
    
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]!=sqrt(A)){
             v.push_back(A/v[i]);
        }
       
    }
    return v;
}


