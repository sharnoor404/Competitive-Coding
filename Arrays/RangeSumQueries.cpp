/*Range Sum Queries using Prefix Sum
Given an Array of n integers and q queries having indices l and r . 
Find out sum between the given range of indices.
*/

#include<iostream>
using namespace std;
int main(){
	int n;
	long long int queryCount;
	cout<<"Enter size of array:"<<endl;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter number of Queries:"<<endl;
	cin>>queryCount;
	int *prefixSum=new int[n];
	prefixSum[0]=arr[0];
	for(int i=1;i<n;i++){
		prefixSum[i]=prefixSum[i-1]+arr[i];
	}
	for(int i=0;i<queryCount;i++){
		int l,r;
		cin>>l;
		cin>>r;
		if(l>=0 && r<n){
			if(l==0){
			cout<<prefixSum[r]<<endl;
		}else{
			cout<<prefixSum[r]-prefixSum[l-1]<<endl;
			}	
		}
	
	}
	
}
