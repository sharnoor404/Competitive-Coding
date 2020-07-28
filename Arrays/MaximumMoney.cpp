/*
Maximum Money Problem :GFG
*/
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	for(int i=0;i<T;i++){
	    int N,M;
	    cin>>N>>M;
	    if(N%2!=0){//odd num of houses
	        cout<<(N/2+1)*M<<"\n";
	    }else{
	        cout<<(N/2)*M<<"\n";
	    }
	}
}
