/*
Given two sorted arrays arr1[] and arr2[] in non-decreasing order with size n and m. 
The task is to merge the two sorted arrays in place, i. e., we need to consider all n + m elements in sorted order, 
then we need to put first n elements of these sorted in first array and remaining m elements in second array.
*/

//approach 1: O(m*n)
void merge(int arr1[], int arr2[], int n, int m) 
{ 
    for(int i=m-1;i>=0;i--){
        int temp=arr1[n-1];
        int j;
        for(j=n-2;j>=0 && arr1[j]>arr2[i];j--){
            arr1[j+1]=arr1[j];
        }
        if(j!=n-2 || temp>arr2[i]){
            arr1[j+1]=arr2[i];
            arr2[i]=temp;
        }
        
    }
} 
