/*
MCM : CN
*/
#include<climits>
int mcm(int* p, int n){

    int **dp=new int*[n+1];
    for(int i=0;i<=n;i++){
        dp[i]=new int[n+1];
    }
    for(int i=1;i<=n;i++){
        dp[i][0]=0;
        dp[0][i]=0;
        dp[i][i]=0;
    }
    for(int d=2;d<=n;d++){
        for(int i=1;i<=n-d+1;i++){
            int j=i+d-1;
            dp[i][j]=INT_MAX;
            int q;
            for(int k=i;k<=j-1;k++){
                q=dp[i][k]+dp[k+1][j]+p[i-1]*p[k]*p[j];
                if(q<dp[i][j]){
                    dp[i][j]=q;
                }
            }
        }
    }
return dp[1][n];
}

