/*
Geek and Coffee shop problem : GFG
*/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int N,M;
	    cin>>N>>M;
	    int ans=N/pow(2,M-1);
	    cout<<ans<<"\n";
	}
}
