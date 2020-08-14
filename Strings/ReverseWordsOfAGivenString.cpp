/*
Reverse Words of a given string
*/
#include <iostream>
#include <stack>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s,ans="";
	    cin>>s;
	    stack<char> temp;
	    for(int i=s.size()-1;i>=0;i--){
	        while(i>=0 && s[i]!='.'){
	            temp.push(s[i]);
	            i--;
	        }
	        while(!temp.empty()){
	            ans+=temp.top();
	            temp.pop();
	            if(i>=0 && temp.empty()){
	                ans+='.';
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
