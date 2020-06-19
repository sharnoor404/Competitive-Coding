/*
Given an array arr[] of positive integers of size N. 
Reverse every sub-array of K group elements.
*/

vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
    for(int i=0;i<n;i=i+k){
        int start=i;
        int end=start+k-1;
        if(end>=n){
            end=n-1;
        }
        int range=(end+start)/2;
        for(int j=start;j<=range;j++){
            long long int x=mv[j];
            mv[j]=mv[end];
            mv[end]=x;
            end--;
        } 
    }
    return mv;
    
}
