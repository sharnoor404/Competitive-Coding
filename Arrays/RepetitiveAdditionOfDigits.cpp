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

//Approach 2: O(1)

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	   int n;
	   /*
	   bcoz every number can be represented as 9x+k
	   */
	   cin>>n;
	   if(n==0){
	       cout<<"0"<<endl;
	   }else if(n%9==0){
	       cout<<"9"<<endl;
	   }else{
	       cout<<n%9<<endl;
	   }
	}
	
}
