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
