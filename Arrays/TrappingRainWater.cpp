/*
Given an array arr[] of N non-negative integers representing the height of blocks 
at index i as Ai where the width of each block is 1. 
Compute how much water can be trapped in between blocks after raining.
*/
int trappingWater(int arr[], int n){
    int maxSeenSoFar=0;
    int *maxRight=new int[n];
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxSeenSoFar){
            maxSeenSoFar=arr[i];
        }
         maxRight[i]=maxSeenSoFar;
    }
    
    int maxLeft=0;
    int rainWater=0;
    for(int i=0;i<n;i++){
        rainWater+=max(min(maxLeft,maxRight[i])-arr[i],0);
        if(arr[i]>maxLeft){
            maxLeft=arr[i];
        }
    }
    return rainWater;
}
