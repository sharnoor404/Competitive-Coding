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

//approach 2:(Efficient, O((n+m)*log(n+m)))
int nextGap(int gap) 
{ 
    if (gap <= 1) 
        return 0; 
    return (gap / 2) + (gap % 2); 
} 

void merge(int arr1[], int arr2[], int n, int m) 
{ 
   int i, j, gap = n + m; 
    for (gap = nextGap(gap); gap > 0; gap = nextGap(gap)) 
    { 
        // comparing elements in the first array. 
        for (i = 0; i + gap < n; i++) 
            if (arr1[i] > arr1[i + gap]) 
                swap(arr1[i], arr1[i + gap]); 
  
        //comparing elements in both arrays. 
        for (j = gap > n ? gap-n : 0 ; i < n&&j < m; i++, j++) 
            if (arr1[i] > arr2[j]) 
                swap(arr1[i], arr2[j]); 
  
        if (j < m) 
        { 
            //comparing elements in the second array. 
            for (j = 0; j + gap < m; j++) 
                if (arr2[j] > arr2[j + gap]) 
                    swap(arr2[j], arr2[j + gap]); 
        } 
    } 
} 
