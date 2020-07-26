/*
Reverse a string
*/
#include <iostream>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
	int T;
	cin>>T;
	
	for(int i=0;i<T;i++){
	    string s;
	    cin>>s;
	    
	    for(int j=0;j<s.length()/2;j++){
	        char temp=s[j];
	        s[j]=s[s.length()-1-j];
	        s[s.length()-1-j]=temp;
	    }
	   cout<<s<<"\n"; 
	}
	
}
