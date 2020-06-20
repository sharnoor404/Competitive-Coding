/*
Given an unsorted array arr[] of size N, 
rotate it by D elements in the counter-clockwise direction. 
*/

//approach 1:
void reverse(int *arr, int n,int start,int end){
    int mid=start+(end-start)/2;
    for(int i=start;i<=mid;i++){
        int temp=arr[i];
        arr[i]=arr[end];
        arr[end]=temp;
        end--;
    }
}
void rotateArr(int arr[], int d, int n){
   d=d%n;
   
   reverse(arr,n,0,n-1);
   reverse(arr,n,0,n-d-1);
   reverse(arr,n,n-d,n-1);
}
//approach 2:
void rotateArr(int arr[], int d, int n){
    int k=-1;
    for(int i=0;i<__gcd(d,n);i++){
        int j=i;
        int temp=arr[i];
        while(1){
             k=(j+d)%n;
            if(k==i){
                break;
            }
            arr[j]=arr[k];
            j=k;
        }
        arr[j]=temp;
        
    }
}
