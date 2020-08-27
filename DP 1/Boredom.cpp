/*
Boredom : CN
*/
#include<unordered_map>
int solve(int n,vector<int>A){
    int *dp=new int [1001];
    int *frq=new int[1001];
    
    for(int i=0;i<=1000;i++){
        frq[i]=0;
    }
    
    for(int i=0;i<A.size();i++){
        frq[A[i]]++;
    }
    dp[0]=0;
    dp[1]=frq[1];
    for(int i=2;i<=1000;i++){
        dp[i]=std::max(dp[i-1],frq[i]*i+dp[i-2]);
    }
return dp[1000];
}
