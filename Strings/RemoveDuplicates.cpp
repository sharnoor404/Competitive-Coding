/*
Remove Duplicates : GFG
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	    string s;
	    getline(cin,s);
	    int arr[256]={0};
	    int nextPt=0;
	    for(int i=0;i<s.length();i++){
	        if(arr[s[i]]==0){
	            arr[s[i]]=1;
	            s[nextPt]=s[i];
	            nextPt++;
	        }
	    }
	    s=s.substr(0,nextPt);
	    cout<<s<<endl;
	}
	return 0;
}
