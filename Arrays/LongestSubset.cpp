/*
Given an array, find and return the length of longest subarray containing equal number of 0s and 1s.
*/
#include<unordered_map>
int max(int arr[], int n) {
    unordered_map<int,int> ourmap;
    ourmap[0]=1;
    ourmap[1]=-1;
    int max_length=0,i=0,k=0,length=0,sum=0;
    for(int j=i;j<n;j++){
        if(n-j>max_length){
              sum=0;
            k=0;
        length=0;
        while((arr[j]==1|| arr[j]==0) && j<n){
        sum=sum+ourmap[arr[j]];
        k++;
        if(sum==0){
            length=k;
        }
            j++;
    }
        if(length>max_length){
        max_length=length;
    }
          k=0;
            length=0;
            sum=0;
        if(j==n ||(j==n-1)){
            j=i;
            i=i+1;
           
        } 
    }
         
        }
  
    return max_length;
}

