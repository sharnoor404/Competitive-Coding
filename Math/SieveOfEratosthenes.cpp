/*
Sieve of Eratosthenes 
*/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    bool *arr=new bool[n+1];
	    for(int i=0;i<=n;i++){
	        arr[i]=true;
	    }
	    arr[0]=false;
	    arr[1]=false;
	    for(int i=2;i<=pow(n,0.5);i++){
	        if(arr[i]==true){
	        int k=2;
	        while(i*k<=n){
	            arr[i*k]=false;
	            k++;
	        }
	        }
	    }
	    for(int i=0;i<=n;i++){
	        if(arr[i]==true){
	            cout<<i<<" ";
	        }
	    }
	    cout<<endl;
	    
	}
	return 0;
}
