/*
Find the largest continuous sequence in a array which sums to zero.
*/
vector<int> Solution::lszero(vector<int> &A) {
    
    unordered_map<int,int> ourmap;
    int start=-1;
    int end=-1;
    long long int sum=0;
    for(int i=0;i<A.size();i++){
       sum=sum+A[i];
       
       if(sum==0){
           start=0;
           end=i;
       }
       if(start==-1 && A[i]==0){
       start=i;
       end=i;
    
}
       
       if(ourmap.count(sum)!=0){
           if(i-(ourmap[sum]+1)>end-start){
                   start=ourmap[sum]+1;
                    end=i;
           }
       }
           else{
               ourmap[sum]=i;
           }
       
    }
    
    vector<int> solution;
    if(start!=-1){
        for(int i=start;i<=end;i++){
        solution.push_back(A[i]);
    } 
    }
   
    return solution;
}

