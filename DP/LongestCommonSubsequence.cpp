/*
Longest common subsequence : CB
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int A,B;
	    cin>>A>>B;
	    string X,Y;
	    cin>>X>>Y;
	    
	    int **dp=new int*[A+1];
	    for(int i=0;i<=A;i++){
	        dp[i]=new int[B+1];
	        for(int j=0;j<=B;j++){
	            dp[i][j]=0;
	        }
	    }
	    
	    for(int i=1;i<=A;i++){
	        for(int j=1;j<=B;j++){
	            if(X[i-1]==Y[j-1]){
	                dp[i][j]=dp[i-1][j-1]+1;
	            }else{
	                dp[i][j]=std::max(dp[i-1][j],dp[i][j-1]);
	            }
	        }
	    }
	    cout<<dp[A][B]<<endl;
	}
}
