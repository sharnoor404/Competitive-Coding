/*
Max subarray of 1's formed by flipping K 0's : CB
*/

#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int zero_count=0;
	int left=0;
	int right=0;
	int max_length=0;
	while(right<n){
		if(arr[right]==0){
			zero_count++;
		}
		if(zero_count<=k){
			if(right-left+1>max_length){
				max_length=right-left+1;
			}
		}else{
			while(zero_count>k){
				if(arr[left]==0){
					zero_count--;
				}
				left++;
			}
		}
		right++;
	}
	cout<<max_length<<endl;
}
