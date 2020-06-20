/*
Given an unsorted array A of size N of non-negative integers, 
find a continuous sub-array which adds to a given number S.
*/
void subarraySum(int arr[], int n, int s){
    int sum=0;
    int start=0;
 for(int i=0;i<n;i++){
     sum+=arr[i];
     while(sum>s){
         sum=sum-arr[start];
         start++;
     }
     if(sum==s){
         cout<<start+1<<" "<<i+1;
         return;
     }
 }
 cout<<"-1";   
}
