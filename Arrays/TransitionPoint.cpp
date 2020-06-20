/*
Given a sorted array containing only numbers 0 and 1, Find the transition point efficiently. 
Transition point is a point where "0" ends and "1" begins (0 based indexing).
Note that, if there is no "1" exists, print -1.
*/
int transitionPoint(int arr[], int n) {
    if(arr[0]==1){
        return 0;
    }
    if(arr[n-1]==0){
        return -1;
    }
    
    int start=0;
    int end=n-1;
    int result;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==0){
            start=mid+1;
        }
        if(arr[mid]==1){
            result=mid;
            end=mid-1;
        }
        
    }
    return result;
}
