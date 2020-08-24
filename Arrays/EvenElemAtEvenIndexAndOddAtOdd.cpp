/*
Even elements at even index and odd elements at odd index in O(1) space
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int evenIndex=0;
	int oddIndex=1;
	while(true){
		while(evenIndex<n && arr[evenIndex]%2==0){
			evenIndex+=2;
		}
		while(oddIndex<n && arr[oddIndex]%2==1){
			oddIndex+=2;
		}
		if(oddIndex<n && evenIndex<n){
			int temp=arr[oddIndex];
			arr[oddIndex]=arr[evenIndex];
			arr[evenIndex]=temp;
		}else{
			break;
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
