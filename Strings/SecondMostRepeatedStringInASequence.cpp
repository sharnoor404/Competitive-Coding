/*
Second most repeated string in a sequence : GFG
*/
#include <iostream>
#include<unordered_map>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    unordered_map<string,int> ourmap;
	    string maxString="";
	    string secondMax="";
	    for(int i=0;i<n;i++){
	        string s;
	        cin>>s;
	        ourmap[s]++;
	        if(maxString=="" || ourmap[s]>ourmap[maxString]){
	            //cout<<"works for maxString"<<s<<endl;
	            secondMax=maxString;
	            maxString=s;
	        }else if(s!=maxString && (secondMax=="" ||ourmap[s]>ourmap[secondMax])){
	            //cout<<"works for secondMax"<<s<<endl;
	            secondMax=s;
	        }
	    }
	    cout<<secondMax<<endl;
	}
	return 0;
}
