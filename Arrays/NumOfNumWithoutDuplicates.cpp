#include<iostream>
using namespace std;

int findNum(int *arr, int n,int *fact,int *freq){
	if(n==0 || n==1){
		return 0;
	}
	int ans=0;
	for(int i=arr[0]+1;i<10;i++){
		if(freq[i]>0){
		ans+=fact[n-1];	
		}
	}
	freq[arr[0]]--;
	ans+=findNum(arr+1,n-1,fact,freq);
	return ans;
}

int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	int *fact=new int[n+1];
	int freq[10]={0};
	fact[0]=1;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		fact[i+1]=fact[i]*(i+1);
		freq[arr[i]]++;
	}
	
	
	
	
	cout<<findNum(arr,n,fact,freq);
}
