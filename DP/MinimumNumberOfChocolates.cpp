/*
Minimum number of chocolates : CN
*/
int getMin(int *arr, int n){
  
    int *choc=new int[n];
    choc[0]=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            choc[i]=choc[i-1]+1;
        }else{
            choc[i]=1;
        }
    }
    
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1] && choc[i]<=choc[i+1]){
            choc[i]=choc[i+1]+1;
        }
    }
    int minChoc=0;
    for(int i=0;i<n;i++){
        minChoc+=choc[i];
    }
return minChoc;
}

