/*
MCM : CN
*/

#include<climits>
int mcm(int* p, int n){

    int **dp=new int*[n];
    for(int i=0;i<n;i++){
        dp[i]=new int[n];
        for(int j=0;j<n;j++){
            dp[i][j]=INT_MAX;
        }
    }
    for(int i=0;i<n;i++){
        dp[i][i]=0;
    }
    int start=1;
	int i=0,j=1;
     while(i<n && j<n){
        // cout<<i<<" "<<j<<endl;
         for(int k=i;k<j;k++){
             dp[i][j]=std::min(dp[i][j],dp[i][k] + dp[k+1][j] + p[i]*p[k+1]*p[j+1]);
         }
         //cout<<dp[i][j]<<endl;
         i++;
         j++;
         if(j==n){
             start++;
             if(start==n){
                 break;
             }
             i=0;
             j=start;
         }
       }
    
return dp[0][n-1];
}

