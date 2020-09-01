/*
LIS : All approaches (CB)
*/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int *dp=new int[n];
        dp[0]=1;
        int max_val=0;
        for(int i=1;i<n;i++){
            int j=i-1;
            max_val=1;
            for(;j>=0;j--){
                if(arr[i]>arr[j] && (dp[j]+1>max_val)){
                    max_val=dp[j]+1;
                }
            }
            dp[i]=max_val;
        }
        max_val=0;
        for(int i=0;i<n;i++){
            if(dp[i]>max_val){
                max_val=dp[i];
            }
        }
        
        delete [] arr;
        delete [] dp;
        
        cout<<max_val<<endl;
    }
	return 0;
}
