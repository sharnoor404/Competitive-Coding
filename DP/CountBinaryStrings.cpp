/*
Count binary strings of length n with no consecutive 1's
*/

#include <iostream>
# define MOD 1000000007
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int **dp=new int*[2];
	    for(int i=0;i<2;i++){
	        dp[i]=new int[n+1];
	        for(int j=0;j<=n;j++){
	            dp[i][j]=0;
	        }
	    }
	    
	    dp[0][1]=1;
	    dp[1][1]=1;
	    
	    for(int j=2;j<=n;j++){
	       for(int i=0;i<2;i++){
	            if(i==0){
	                dp[i][j]=(dp[i][j-1]+dp[i+1][j-1])%MOD;
	            }else{
	                dp[i][j]=dp[i-1][j-1];
	            }
	        }
	    }
	    cout<<(dp[0][n]+dp[1][n])%MOD<<endl;
	}
	return 0;
}
