/*
Check if given 2 strings are anagrams : GFG
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string a;
	    string b;
	    cin>>a;
	    cin>>b;
	    
	    if(a.size()!=b.size()){
	        cout<<"NO"<<endl;
	        continue;
	    }
	    char arr[26]={0};
	    for(int i=0;i<a.size();i++){
	        arr[a[i]-'a']++;
	    }
	    
	    for(int i=0;i<b.size();i++){
	        arr[b[i]-'a']--;
	    }
	    int i=0;
	    for(i=0;i<26;i++){
	        if(arr[i]!=0){
	            cout<<"NO"<<endl;
	            break;
	        }
	    }
	    
	    if(i==26)
	     cout<<"YES"<<endl;
	    
	}
	return 0;
}
