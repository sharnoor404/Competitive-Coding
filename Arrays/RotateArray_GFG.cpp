/*
Given an array of size N, and an integer D.
Rotate array by D elements in the clockwise direction
*/
#include <iostream>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int T;
	cin>>T;
	
	for(int i=0;i<T;i++){
	    
	    int N,D;
	    cin>>N>>D;
	    D=D%N;
	    int *arr=new int[N];
	    for(int j=0;j<N;j++){
	        cin>>arr[(j+N-D)%N];
	    }
	    
	    for(int j=0;j<N;j++){
	       cout<<arr[j]<<" "; 
	    }
	    cout<<endl;
	}
	
}
