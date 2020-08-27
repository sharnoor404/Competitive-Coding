/*
Number of APs : CN
*/
#include <unordered_map>
#define mod 100001
int numofAP(int *arr, int N){
    std::unordered_map<int,int> *dp=new std::unordered_map<int,int>[N];
    //array which stores map for each arr value
    long long int ans=N+1;
    // single and zero length of elements are APs
    for(int i=N-2;i>=0;i--){
        for(int j=i+1;j<N;j++){
            int diff=arr[j]-arr[i];
            dp[i][diff]++;
            ans=(ans+1)%mod;
        }
    }
    //2 length APs
    for(int i=N-3;i>=0;i--){
        for(int j=i+1;j<N;j++){
            int diff=arr[j]-arr[i];
            dp[i][diff]=(dp[i][diff]+dp[j][diff])%mod;
            ans=(ans+dp[j][diff])%mod;
        }
    }
   return ans; 
}

