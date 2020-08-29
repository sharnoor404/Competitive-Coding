/*
Coin Tower : CN
*/
string solve(int n, int x, int y)
{
   int *dp=new int[n+1];
    for(int i=0;i<=n;i++){
        if(i==1 ||i==x||i==y){
            dp[i]=1;
        }else{
            dp[i]=0;
        }
    }
    for(int i=2;i<=n;i++){
        if(dp[i]==0){
            //0 -> you lose
            //1-> you win
            if(i-x>=1 && dp[i-x]==0){
                dp[i]=1;
            }else if(i-y>=1 && dp[i-y]==0){
                dp[i]=1;
            }else if(dp[i-1]==0){
                dp[i]=1;
            }
        }
        
    }
    string name="";
    if(dp[n]==0){
        name="Whis";
    }else{
        name="Beerus";
    }
    return name;
}
