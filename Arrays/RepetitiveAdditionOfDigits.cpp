/*
Repetitive addition of digits : GFG
*/

//Approach 1:

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	   int n;
	   cin>>n;
	   int sum=0;
	   while(n/10>0){
	       sum+=n%10;
	       n=n/10;
	       if(n/10==0){
	           sum+=n%10;
	           n=sum;
	           sum=0;
	       }
	   }
	   cout<<n<<endl;
	}
	
}
