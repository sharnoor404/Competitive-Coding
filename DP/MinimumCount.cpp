/*
Minimum Count : CN
*/
int minCount(int n)
{
    int *dp=new int[n+1];
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    
	for(int i=4;i<=n;i++){
        dp[i]=i;
        for(int j=1;j<=sqrt(i);j++){
            if(j*j>i){
                break;
            }else{
                dp[i]=std::min(dp[i],dp[i-(j*j)]+1);
            }
        }
    }
    return dp[n];
}

