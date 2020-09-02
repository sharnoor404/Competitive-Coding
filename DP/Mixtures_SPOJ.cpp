/*
Mixtures : SPOJ
*/

/*
This problem is similar to MCM problem,
here smoke =a*b and new mixture created has a value of (a+b)%100
Therefore, intially smoke=-1 for all entries, dp[i][j]=min smoke produced by i to k mixtures + min smoke produced by k+1 to j mixtures
+ smoke produces by combining these 2 which is equal to (a[i]+a[i+1]....a[k])%100 * (a[k+1]+a[k+2]....a[j])%100
*/
#include <iostream>
#include <climits>
using namespace std;

long long int sum(int *arr,int s,int e){
	long long int sum=0;
	for(int i=s;i<=e;i++){
		sum+=arr[i];
		sum=sum%100;
	}
	return sum;
}

long long int solveMixtures(int *arr,long long int **dp,int s,int e){
	if(s>=e){
		return 0;
	}
	if(dp[s][e]!=-1){
		return dp[s][e];
	}
	dp[s][e]=INT_MAX;
	for(int k=s;k<=e;k++){
		dp[s][e]=std::min(dp[s][e],solveMixtures(arr,dp,s,k)+solveMixtures(arr,dp,k+1,e))+sum(arr,s,k)*sum(arr,k+1,e);
	}
	return dp[s][e];
}

#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int *arr=new int [n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	long long int **dp=new long long int*[n];
	for(int i=0;i<=n;i++){
		dp[i]=new long long int[n+1];
		for(int j=0;j<=n;j++){
			dp[i][j]=-1;
		}
	}
	
	cout<<solveMixtures(arr,dp,0,n-1)<<endl;
	
}
