/*
Friends pairing problem : GFG
*/

#include <iostream>
using namespace std;
# define MOD 1000000007
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long int *dp=new long long int[n+1];
	    dp[0]=1;
	    dp[1]=1;
	    for(int i=2;i<=n;i++){
	        dp[i]=(dp[i-1]%MOD+((i-1)*dp[i-2])%MOD)%MOD;
	    }
	    cout<< dp[n]<<endl;
	}
	return 0;
}
