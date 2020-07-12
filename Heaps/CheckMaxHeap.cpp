/*
Check if given array is a max heap
*/

bool checkMaxHeap(int arr[], int n){
   
    int parentIndex=0;
    int leftChild=2*parentIndex+1;
    int rightChild=2*parentIndex+2;
    while(leftChild<n || rightChild<n){
        if(leftChild<n && arr[leftChild]>arr[parentIndex]){
            return false;
        }else if(rightChild<n && arr[rightChild]>arr[parentIndex]){
            return false;
        }
        parentIndex++;
        leftChild=2*parentIndex+1;
        rightChild=2*parentIndex+2;
    }
    return true;
}

