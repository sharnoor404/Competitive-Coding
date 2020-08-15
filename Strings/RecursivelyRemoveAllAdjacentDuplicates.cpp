/*
Recursively remove all adjacent duplicates : GFG
*/

#include <iostream>
using namespace std;

void helper(string &s){
    int nextIndex=0;
	    for(int i=0;i<s.length();i++){
	        if(i==s.length()-1){
	            s[nextIndex]=s[i];
	            nextIndex++;
	            break;
	        }
	        if(s[i+1]!=s[i]){
	                s[nextIndex]=s[i];
	                nextIndex++;
	        }else{
	            while(s[i+1]==s[i]){
	                i++;
	            }
	        }
	    }
	    if(nextIndex==s.length()){
	        cout<<s<<endl;
	        return;
	    }
	    string new_string=s.substr(0,nextIndex);
	    helper(new_string);
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    
	    helper(s);
	}
	return 0;
}
