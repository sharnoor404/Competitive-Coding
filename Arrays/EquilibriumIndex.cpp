/*
Equilibrium index of an array is an index such that the sum of elements at lower indexes 
is equal to the sum of elements at higher indexes.Find out the first Equilibrium index i from left 
*/

#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter array size:"<<endl;
	cin>>size;
	int *arr=new int[size];
	cout<<"Enter elements of array:"<<endl;
	long long int totalSum=0;
	for(int i=0;i<size;i++){
		cin>>arr[i];
		totalSum=totalSum+arr[i];
	}
	long long int leftSum=0;
	
	for(int i=0;i<size;i++){
		totalSum=totalSum-arr[i];
		
		if(leftSum==totalSum){
			cout<<"Equilibrium Index="<<i<<endl;
			return 0;
		}
		leftSum+=arr[i];
		
	}
	cout<<"Equilibrium Index not found"<<endl;
	return 0;
	
}
