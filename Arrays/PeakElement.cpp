/*
Given an array A of N integers. The task is to find a peak element in it in O( log N ) .
An array element is peak if it is not smaller than its neighbours. 
For corner elements, we need to consider only one neighbour.
*/

int peakElement(int arr[], int n)
{
   int low=0;
   int high=n-1;
   
   while(low<=high){
       int mid=low+(high-low)/2;
       if((low==high)|| (low==mid && arr[mid]>arr[mid+1]) || (high==mid && arr[mid]>arr[low]) ||( mid>low && mid<high && arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1])){
           return mid;
       }else if(arr[mid-1]>arr[mid]){
           high=mid-1;
       }else if(arr[mid+1]>arr[mid]){
           low=mid+1;
       }
}
}
