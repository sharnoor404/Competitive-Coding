/*
Print LCS of 2 strings (given there exists a unique LCS) : CB
*/

#include<iostream>
using namespace std;

int main(){
	string s1,s2;
	cin>>s1>>s2;
	
	int **dp=new int*[s1.length()+1];
	for(int i=0;i<=s1.length();i++){
		dp[i]=new int[s2.length()+1];
		for(int j=0;j<=s2.length();j++){
			dp[i][j]=0;
		}
	}
	
	for(int i=1;i<=s1.length();i++){
		for(int j=1;j<=s2.length();j++){
			if(s1[i-1]==s2[j-1]){
				dp[i][j]=dp[i-1][j-1]+1;
			}else{
				dp[i][j]=std::max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	
	string ans="";
	
	int i=s1.length();
	int j=s2.length();
	
	while(i>0 && j>0){
		int x=dp[i-1][j];
		int y=dp[i][j-1];
		if(x==y){
			if(x!=dp[i][j]){
				ans=s1[i-1]+ans;
				i--;
				j--;
			}else{
				i--;
			}
		}else{
			if(x>y){
				i--;
			}else{
				j--;
			}
		}
	}
	cout<<ans<<endl;
}
