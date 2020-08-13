/*
Consecutive 1's not allowed
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    unsigned long long int a=1;
	    unsigned long long int b=1;
	    for(int j=1;j<=n;j++){
	       int temp=b%1000000007;
	       b=(unsigned long long int)(a+b)%1000000007;
	       a=temp;
	    }
	    b=b%1000000007;
	    cout<<b<<endl;
	}
	return 0;
}
