/*
First non repeating character in a stream : GFG
*/

#include <iostream>
#include <queue>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int frq[256]={0};
	    queue<char> Q;
	    for(int j=0;j<n;j++){
	           char x;
	           cin>>x;
	           Q.push(x);
	           frq[x]++;
	           while(!Q.empty()){
	               if(frq[Q.front()]>1){
	                   Q.pop();
	               }else{
	                   cout<<Q.front()<<" ";
	                   break;
	               }
	           }
	           if(Q.empty()){
	               cout<<"-1"<<" ";
	           }
	    }
	    cout<<endl;
	}
	return 0;
}
