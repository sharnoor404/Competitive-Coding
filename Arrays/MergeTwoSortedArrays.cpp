/*Given two sorted arrays of Size M and N respectively, 
merge them into a third array such that the third array is also sorted*/

void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){
    int i=0,j=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            ans[i+j]=arr1[i];
            i++;
        }else{
            ans[i+j]=arr2[j];
            j++;
        }
    }
    while(i<size1){
        ans[i+j]=arr1[i];
        i++;
    }
    while(j<size2){
        ans[i+j]=arr2[j];
        j++; 
    }
    
    
}

