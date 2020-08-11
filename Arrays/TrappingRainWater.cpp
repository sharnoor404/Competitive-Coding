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

//approach 2

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int *arr=new int [n];
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	    }
	    
	    int leftMax=0;
	    int rightMax=0;
	    int l=0;
	    int r=n-1;
	    int water=0;
	    while(l<r){
	        if(arr[l]<arr[r]){
	            if(arr[l]>leftMax){
	                leftMax=arr[l];
	            }else{
	                water+=(leftMax-arr[l]);
	            }
	            l++;
	        }else{
	            if(arr[r]>rightMax){
	                rightMax=arr[r];
	            }else{
	                water+=(rightMax-arr[r]);
	            }
	            r--;
	        }
	    }
	    
	    cout<<water<<endl;
	}
	return 0;
}
