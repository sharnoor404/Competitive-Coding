/*
Repeated Character : GFG
*/
#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    unordered_map<char,int> ourmap;
	    int min=INT_MAX;
	    for(int i=0;i<s.length();i++){
	        if(ourmap.count(s[i])==0){
	            ourmap[s[i]]=i;
	        }else{
	            if(ourmap[s[i]]<min){
	                min=ourmap[s[i]];
	            }
	        }
	    }
	    if(min==INT_MAX){
	        cout<<"-1"<<endl;
	    }else{
	        cout<<s[min]<<endl;
	    }
	}
	return 0;
}
