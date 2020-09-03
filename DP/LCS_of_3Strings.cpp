/*
LCS of 3 strings : CB
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,n,o;
	    cin>>m>>n>>o;
	    string x,y,z;
	    cin>>x>>y>>z;
	    
	    int ***dp=new int**[m+1];
	    for(int i=0;i<=m;i++){
	        dp[i]=new int*[n+1];
	        for(int j=0;j<=n;j++){
	            dp[i][j]=new int[o+1];
	            for(int k=0;k<=o;k++){
	                dp[i][j][k]=0;
	            }
	        }
	    }
	    
	    for(int i=1;i<=m;i++){
	        for(int j=1;j<=n;j++){
	            for(int k=1;k<=o;k++){
	                if(x[i-1]==y[j-1]&& y[j-1]==z[k-1]){
	                    dp[i][j][k]=dp[i-1][j-1][k-1]+1;
	                }else{
	                    dp[i][j][k]=std::max(dp[i-1][j][k],std::max(dp[i][j-1][k], dp[i][j][k-1])); 
	                }
	            }
	        }
	    }
	    cout<<dp[m][n][o]<<endl;
	}
	return 0;
}

