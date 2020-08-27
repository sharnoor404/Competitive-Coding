/*
Loot House : CN
*/
using namespace std;
int getMaxMoney(int arr[], int n){

    long long int *dp=new long long int[n];
    dp[0]=arr[0];
    dp[1]=std::max(arr[0],arr[1]);
	for(int i=2;i<n;i++){
        dp[i]=std::max(dp[i-1],(arr[i]+dp[i-2]));
    }
  
	return dp[n-1];
}

