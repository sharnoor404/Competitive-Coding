vector<int> Solution::plusOne(vector<int> &A) {
    reverse(A.begin(),A.end());
    
    int carry=1;
    int i=0;
    while(i<A.size()){
         int x=(A[i]+carry)%10;
        carry=(A[i]+carry)/10;
        A[i]=x;
        i++;
    }
    if(carry==1){
        A.push_back(1);
    }
    
   i=A.size()-1;
   
        while(A[i]==0){
         A.pop_back();
         i--;
        }
   reverse(A.begin(),A.end());
   return A;

    
   
}

