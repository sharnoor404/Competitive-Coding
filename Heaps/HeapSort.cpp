/* 
In Place Heap Sort
*/
void inplaceHeapSort(int input[], int n){
    for(int i=1;i<n;i++){
        int childIndex=i;
     
        while(childIndex>0){
            int parentIndex=(childIndex-1)/2;
            if(input[parentIndex]>input[childIndex]){
                int temp=input[parentIndex];
                input[parentIndex]=input[childIndex];
                input[childIndex]=temp;
            }else{
                break;
            }
            childIndex=parentIndex;
        }
    }
    
        while(n>1){
        int ans=input[0];
        input[0]=input[n-1];
        input[n-1]=ans;
		n--;
        int parentIndex=0;
        int minIndex=parentIndex;
        int leftIndex=2*parentIndex+1;
        int rightIndex=2*parentIndex+2;
        while(leftIndex<n || rightIndex<n){
            
            if(leftIndex<n && input[leftIndex]<input[minIndex]){
                minIndex=leftIndex;
            }
            if(rightIndex<n && input[rightIndex]<input[minIndex]){
                minIndex=rightIndex;
            }
            if(parentIndex!=minIndex){
                int temp=input[parentIndex];
                input[parentIndex]=input[minIndex];
                input[minIndex]=temp;
                parentIndex=minIndex;
                leftIndex=2*parentIndex+1;
                rightIndex=2*parentIndex+2;
            }else{
                break;
            }
        }
    }
   
}

