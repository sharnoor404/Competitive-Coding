#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int N,S;
	cin>>N>>S;
	int *item_weight=new int [N];
	int *item_val=new int [N];
	
	for(int i=0;i<N;i++){
		cin>>item_weight[i];
	}
	
	pair<int,int>* solution=new pair<int,int>[N];
	
	for(int j=0;j<N;j++){
		cin>>item_val[j];
		pair<int,int> p;
		p.first=item_weight[j];
		p.second=item_val[j];
		solution[j]=p;
	}
	
	sort(solution,solution+N);
	
	int *dp=new int[S+1];
	for(int i=0;i<=S;i++){
		dp[i]=0;
	}
	
	for(int i=solution[0].first;i<=S;i++){
		for(int j=0;j<N;j++){
			if(item_weight[j]<=i){
				dp[i]=std::max(dp[i],dp[i-item_weight[j]]+item_val[j]);
			}
		}
	}
	
	cout<<dp[S]<<endl;
	
}
