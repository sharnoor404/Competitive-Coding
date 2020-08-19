/*
Geek and its colored strings : GFG
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,r,g,b;
	    cin>>n>>r>>g>>b;
	    long long int facts[21]={0};
	    facts[0]=1;
	    for(int i=1;i<=20;i++){
	       facts[i]=(long long int)(facts[i-1]*i); 
	    }
	    long long int ans=0;
	    int remaining=n-(r+g+b);
	    for(int i=0;i<=remaining;i++){
	        for(int j=0;j<=remaining-i;j++){
	            int k=remaining-(i+j);
	            int r1=r+i;
	            int g1=g+j;
	            int b1=b+k;
	            ans+=(facts[n]/(facts[r1]*facts[g1]*facts[b1]));
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
