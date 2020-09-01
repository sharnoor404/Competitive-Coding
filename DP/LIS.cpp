/*
LIS : All approaches (CB)
*/

//Approach 1: dp[i] represents length of longest substring ending at i. Complexity=O(n^2)

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

//Approach 2: dp[i] here represents array value at which the longest subsequence of length i ends
//Complexity=O(n^2)

#include <iostream>
#include <climits>
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
        int *dp=new int[n+1];
        dp[0]=INT_MIN;
        for(int i=1;i<=n;i++){
            dp[i]=INT_MAX;
        }
        
        /*consider arr=[5 4 3 2 1]
        initial dp= INT_MIN INT_MAX INT_MAX INT_MAX INT_MAX INT_MAX
        index...........0......1........2.......3.......4.....5.....
        i=0 ->arr[i]=5, now 5>dp[0]=INT_MIN && 5<dp[0+1]=INT_MAX.
        Therefore, longest substring of length 1 ends at 5
        i=1 ->arr[i]=4, now 4>dp[0] and 4<dp[1].
        Therefore, dp[1]=4 -> longest substring of length 1 ends at 4
        This has been done since if we keep the lowest val at an index we have more scope of having a longer substring
        Compare having dp[1]=6 and dp[1]=2 In a case when arr=6 2 3 4 5
        In case of dp[1]=6 longest substring=1
        whereas in case of dp[1]=2 longest substring = 4
        */
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i]>dp[j] && arr[i]<dp[j+1]){
                    dp[j+1]=arr[i];
                }
            }
        }
        int max_val=0;
        for(int i=0;i<=n;i++){
            if(dp[i]!=INT_MAX){
                max_val=i;
            }
        }
        delete [] arr;
        delete [] dp;
        
        cout<<max_val<<endl;
    }
	return 0;
}
