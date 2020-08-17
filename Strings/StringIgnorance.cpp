/*
String ignorance : GFG
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	    string s;
	    unordered_map<char,int> ourmap;
	    getline(cin,s);
	    
	    for(int i=0;i<s.length();i++){

	        if(ourmap.count(tolower(s[i]))==0 || ourmap[tolower(s[i])]==0){
	            cout<<s[i];
	            ourmap[tolower(s[i])]=1;
	        }else{
	            ourmap[tolower(s[i])]=0;
	        }
	    }
	   cout<<endl; 
	}
	return 0;
}

