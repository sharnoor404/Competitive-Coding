/*
0/1 Knapsack : CB
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N,S;
	    cin>>N>>S;
	    
	    int *item_val=new int[N];
	    int *item_weight=new int[N];
	    pair<int,int> * combined=new pair<int,int> [N];
	    for(int i=0;i<N;i++){
	        cin>>item_val[i];
	    }
	    for(int j=0;j<N;j++){
	        cin>>item_weight[j];
	        pair<int,int> p;
	        p.first=item_weight[j];
	        p.second=item_val[j];
	        combined[j]=p;
	    }
	    
	    sort(combined,combined+N);
	    
	    int **dp=new int*[N+1];
	    for(int i=0;i<=N;i++){
	        dp[i]=new int[S+1];
	        for(int j=0;j<=S;j++){
	            dp[i][j]=0;
	        }
	    }
	    
	    for(int i=1;i<=N;i++){
	        for(int j=1;j<=S;j++){
	            if(j>=combined[i-1].first){
	                dp[i][j]=std::max(dp[i-1][j],dp[i-1][j-combined[i-1].first]+combined[i-1].second);
	            }else{
	                dp[i][j]=dp[i-1][j];
	            }
	        }
	    }
	    cout<<dp[N][S]<<endl;
	    
	}
	return 0;
}
