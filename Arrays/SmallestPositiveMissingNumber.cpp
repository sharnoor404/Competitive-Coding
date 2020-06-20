/*
Given an array arr[] of N integers including 0. 
Find the smallest positive number missing from the array.
*/

//approach 1:
int findMissing(int arr[], int n) { 
    
    unordered_map<int,int> ourmap;
    for(int i=1;i<=n+1;i++){
        ourmap[i]=true;
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]>0 && ourmap.count(arr[i])>0){
            ourmap[arr[i]]=false;
        }
    }
    
    for(int i=1;i<=n+1;i++){
        if(ourmap[i]==true){
            return i;
        }
    }
}

//approach 2: space efficient
int findMissing(int arr[], int n) { 
    
      for(int i=0;i<n;i++){
          //this uses index referencing,
          //i.e every index would have index+1 as value 
          if(arr[i]>0 && arr[i]<=n){
              int pos=arr[i]-1;
              //swap
              if(arr[pos]!=arr[i]){
                int temp=arr[pos];
                arr[pos]=arr[i];
                arr[i]=temp;
                i--;
              }
          }
      }
      
      for(int i=0;i<n;i++){
          if(arr[i]!=i+1){
              return i+1;
          }
      }
      return n+1;
}
//Dry run:
//Given: 0 -10 1 3 -20
//1>0 && 1<=5: pos=1-1 swap(arr[pos] and arr[i])
// after swap: 1 -10 0 3 -20
//3>0 && 3<=5 : pos=3-1 
//after swap: 1 -10 3 0 -20
//inde:       0  1  2 3  4

//check which index doesnt have a value as index+1
// ans=1+1: 2 

