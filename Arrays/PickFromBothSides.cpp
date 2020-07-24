/*
Given an integer array A of size N.
Pick B elements from either left or right end of the array A to get maximum sum.
The B elements can be such that you may consider 1 from extreme left and other B-1 from extreme right or vice versa.
Find and return the maximum possible sum
*/
int Solution::solve(vector<int> &A, int B) {
    
    if(B>A.size()){
        return 0;
    }
    
   int leftSum=0;
   for(int i=0;i<B;i++){
       leftSum+=A[i];
   }
   
   int leftExtremeIndex=B-1;
   int ans=leftSum;
   int max_val=ans;
   for(int i=A.size()-1;i>A.size()-B-1;i--){
       ans=max(ans,max_val-A[leftExtremeIndex]+A[i]);
       max_val=max_val-A[leftExtremeIndex]+A[i];
       leftExtremeIndex--;
   }
   return ans;
   
}


