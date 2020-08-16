/*
Longest distinct characters in a string : GFG
Print length of smallest substring with maximum number of distinct characters.
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    unordered_map<char,bool> ourmap;
	    int start=0;
	    int end=0;
	    int maxLength=-1;
	    int currLength=0;
	    for(int i=0;i<s.length();i++){
	        if(ourmap.count(s[i])==0){
	            ourmap[s[i]]=true;
	            end++;
	            currLength=i-start+1;
	        }else{
	            
	            if(currLength>maxLength){
	                maxLength=currLength;
	            }
	            while(s[start]!=s[end] && start<end){
	                ourmap.erase(s[start]);
	                start++;
	            }
	            start++;
	            end++;
	        }
	    }
	    if(currLength>maxLength){
	        maxLength=currLength;
	    }
	    cout<<maxLength<<endl;
	}
	return 0;
}
