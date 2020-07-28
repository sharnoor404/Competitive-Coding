/*
Given 2 integers A,B.
Find the number of bits needed to be flipped to convert A to B
*/

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	for(int i=0;i<T;i++){
	    int A,B;
	    cin>>A>>B;
	    
	    int result=A^B;
	    int count=0;
	    for(int i=0;i<32;i++){
	       if(result & 1<<i){
	           count++;
	       } 
	    }
	    cout<<count<<"\n";
	}
}
