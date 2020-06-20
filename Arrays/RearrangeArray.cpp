/*
Given an array arr[] of size N where every element is in the range from 0 to n-1. 
Rearrange the given array so that arr[i] becomes arr[arr[i]] with O(1) extra space.
*/

void arrange(long long arr[], int n) {
   //every index value=arraysize*newValue+oldValue
   for(int i=0;i<n;i++){
       int temp=arr[arr[i]]%n;
       arr[i]+=(n*temp);
   }
   //extracting the new value.
   for(int i=0;i<n;i++){
       arr[i]=arr[i]/n;
   }
    
}
