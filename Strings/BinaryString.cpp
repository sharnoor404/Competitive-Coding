/*
Given a binary string, count the number of substrings that start and end with 1. 
*/

long binarySubstring(int n, string a){
    
    long int count=0;
    long int countOfOnes=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1'){
            countOfOnes++;
        }
    }
    
    count=(long)(countOfOnes*(countOfOnes-1))/2;
    return count;
    
}
