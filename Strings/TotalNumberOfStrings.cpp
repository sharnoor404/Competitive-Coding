/*
Given a number N, find total number of strings of size N that can be formed by using any number of 'a', 
maximum 1 'b' and maximum 2 'c'
*/

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	for(int i=0;i<T;i++){
	    int N;
	    cin>>N;
	   
	    int count=0;
	    
	    if(N>=0){
	        count++;
	    }
	    
	    if(N>=1){
	        count+=2*N;
	    }
	    
	    if(N>=2){
	        count+=(N*(N-1)) + (N*(N-1))/2 + (N*(N-1)*(N-2)/2);
	    }
	    
	   cout<<count<<endl; 
	    
	}
}
