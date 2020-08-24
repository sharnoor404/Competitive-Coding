/*
Given sequence :
1 
1 1 2
1 1 2 1 2 3
Find sum if first n terms
*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=0;
	while(n>0){
		i++;
		n=n-i;
	}
	int remaining=0;
	if(n<0){
		remaining=n+i;
		i--;
	}
	//i complete sum of n terms
	long long int sum=(i)*(i+1)*(2*i+4)/12;
	for(int i=1;i<=remaining;i++){
		sum+=i;
	}
	cout<<sum<<endl;
}
