/*
Given an array arr[] of size N. The task is to find the first repeating element in an array of integers, 
i.e., an element that occurs more than once and whose index of first occurrence is smallest.
*/
int firstRepeated(int arr[], int n) {
    unordered_map<int,int> ourmap;
    int minIndex=INT_MAX;
    for(int i=0;i<n;i++){
        if(ourmap.count(arr[i])==0){
            ourmap[arr[i]]=i;
        }else{
            if(ourmap[arr[i]]<minIndex){
                 minIndex=ourmap[arr[i]];
            }
           
        }
    }
    if(minIndex==INT_MAX){
       return -1; 
    }
    return minIndex+1;
   
}
